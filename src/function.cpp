#include "symbols.h"
#include "program.h"
#include "function.h"
#include "session.h"


RefChain* RefFunctionBase::exec(RefData** l, RefData** r, RefChain* lr_own, Session* sess){
		RefFunctionBase *tmp;

		#ifdef DEBUG
		std::cout << "EXEC : <" << getName() << "  " << chain_to_text(l, r) << " >\n";
		#endif

		sess->execTrace.put(this, l, r, lr_own);
		RefChain* res = eval(l, r, lr_own, sess);
		sess->execTrace.top_pop(tmp, l, r, lr_own); // ?

		#ifdef DEBUG
		std::cout << "EXEC : <" << getName() << "  " << chain_to_text(l, r) << " >  ==>>  " << res->debug() << "\n";
		#endif

		return res;
};


void RefUserFunction::initilizeAll(RefProgram *program){
            std::list<RefSentence *>::iterator
					sent = body.begin(), // ������� ����������� �������
					stopsent = body.end();
			while (sent != stopsent){
				//(*sent)->leftPart->compile( (*sent)->leftPart, program );  ���������� ����� ����� �������� ������� ���� ������ � ������ ������

				//std::cout << "\n#######\n" << (*sent)->leftPart->debug() << "\n--------\n" << (*sent)->rightPart->debug() << "\n#######\n";
				(*sent)->rightPart->compile( (*sent)->leftPart, program );
				++sent;
            };  // std: body.end() - ������� ����� ����������

};

RefChain* RefUserFunction::eval(RefData **l, RefData **r, RefChain *lr_own, Session *sess){
            // ������� ����������� �������
			for(std::list<RefSentence *>::iterator sent = body.begin(), send = body.end();
				sent != send;
				++sent) {
					sess->createVarMap(this);
					SessionStatePoint *state = sess->getState();

					if (sess->matching(*sent, (*sent)->leftPart, l, r, lr_own, false)) {
						RefChain *tmp = sess->substituteExpression( (*sent)->rightPart ); // ������� ����� rightPart'� � ������� ���������� �� ��������

						sess->backToState(state);
						//delete sess->poptopVarMap(); - only by g-collector
						sess->poptopVarMap();
						return tmp;
					}
					//delete sess->poptopVarMap(); - only by g-collector
					sess->poptopVarMap();
			}
			RUNTIMEERRORs(sess, "Function " << this->getName() << " FAIL");
};

void RefUserTemplate::initilizeAll(RefProgram *program){
	leftPart->compile(leftPart, program);
};

RefUserFunction::~RefUserFunction(){
	//std::cout << "~~~ " << getName() << "\n";

	std::list<RefSentence *>::iterator  body_it = body.begin();
	while(body_it != body.end()){
		delete (*body_it);
		++body_it;
	}
};

unistring RefUserFunction::debug(){
	unistring result = "Function " + getName() + " {\n";

	for(std::list<RefSentence *>::iterator sent = body.begin(), send = body.end();
		sent != send;
		++sent)
	{
		result += (*sent)->leftPart->debug();
		result += "  =  ";
		result += (*sent)->rightPart->debug();
		result += "\n";
	}
	result += "}";
	return result;
};


TResult RefUserCondition::init(RefData **&tpl, Session* sess, RefData **&l, RefData **&r, RefChain *&lr_own){
	if (! ref_dynamic_cast<RefTemplateBase>(this->own)){
		if (r != sess->current_view_r()){ // ������ � ������� ������� ����� ����������� � �������� ���������
			sess->MOVE_TO_pred_template(tpl);
			return BACK;
		}
	}

	RefChain *rp, *rpp = sess->substituteExpression(this->rightPart);
	rp = sess->getProgram()->executeExpression(rpp, sess);
	//if (rp!=rpp) delete rpp;

	// ��������� ���������
	SessionStatePoint *sess_state = sess->getState();


	if (sess->matching(this, leftPart, rp->at_first(), rp->at_last(), rp, false) == !withnot){
		if (withnot){ sess->backToState(sess_state); };
		sess->saveConditionArg(this, rp); // ��������� �������� ������� ��� ���������� ������
		sess->MOVE_TO_next_template(tpl);
		return GO;
	}

	// ��������������� ���������
	sess->backToState(sess_state);

	sess->MOVE_TO_pred_template(tpl);
	return BACK;
};


TResult RefUserCondition::back(RefData **&tpl, Session* sess, RefData **&l, RefData **&r, RefChain *&lr_own){
	RefChain *rp  =  sess->restoreConditionArg(this);

	// ������������� ������� ������ ������������ �����, ��� ��� �� �������� ���������� ��������� ������������
	if (!withnot && sess->matching(this, leftPart, rp->at_first(), rp->at_last(), rp, true)){
		sess->saveConditionArg(this, rp); // ���������� �������� ������� � ���������
		sess->MOVE_TO_next_template(tpl);
		return GO;
	}
	//delete rp; // �������� ������� ��� ������ ������ �� �����
	sess->MOVE_TO_pred_template(tpl);
	return BACK;
};
