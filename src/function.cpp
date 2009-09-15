#include "program.h"
#include "function.h"
#include "session.h"

void RefUserFunction::initilizeAll(RefProgram *program){
            std::list<RefSentence *>::iterator 
					sent = body.begin(), // ������� ����������� �������
					stopsent = body.end();
			while (sent != stopsent){
				(*sent)->leftPart->compile( (*sent)->leftPart, program );
				(*sent)->rightPart->compile( (*sent)->leftPart, program );
				++sent;                
            };  // std: body.end() - ������� ����� ����������

};

RefChain* RefUserFunction::eval(RefData **l, RefData **r, Session *sess){
            // ������� ����������� �������
#ifdef DEBUG
	std::cout << "EXEC : <" << getName() << "  " << chain_to_text(l, r) << " >\n";
#endif
			for(std::list<RefSentence *>::iterator sent = body.begin(), send = body.end();
				sent != send;
				++sent) {
					sess->createVarMap(this);
					SessionStatePoint *state = sess->getState();

					if (sess->matching(*sent, (*sent)->leftPart, l, r, false)) {
//#ifdef DEBUG
//	std::cout << "EXEC : <" << getName() << "  " << chain_to_text(l, r) << " > SUCCESS!\n";
//#endif
						//LOG(step++ <<  "\tsucessfull!");
						RefChain *tmp = sess->substituteExpression( (*sent)->rightPart ); // ������� ����� rightPart'� � ������� ���������� �� ��������
#ifdef DEBUG
	std::cout << "EXEC : <" << getName() << "  " << chain_to_text(l, r) << " >  ==>>  " << tmp->debug() << "\n";
#endif

						sess->backToState(state);
						delete sess->poptopVarMap();
						return tmp;
					}
					delete sess->poptopVarMap();
			}
			RUNTIMEERROR(getName(), "no good sentense");
};

void RefUserTemplate::initilizeAll(RefProgram *program){
	leftPart->compile(leftPart, program);
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


TResult RefUserCondition::init(RefData **&tpl, Session* s, RefData **&l, RefData **&r){
	if (! ref_dynamic_cast<RefTemplateBase>(this->own)){
		if (r != s->current_view_r()){ // ������ � ������� ������� ����� ����������� � �������� ���������
			s->MOVE_TO_pred_template(tpl);
			return BACK;
		}
	}

	RefChain *rp, *rpp = s->substituteExpression(this->rightPart);
	rp = s->getProgram()->executeExpression(rpp, s);
	if (rp!=rpp) delete rpp;

	if (s->matching(this, leftPart, (*rp)[0], (*rp)[-1], false)){
		s->saveConditionArg(this, rp); // ��������� �������� ������� ��� ���������� ������
		s->MOVE_TO_next_template(tpl);
		return GO;
	}
	s->MOVE_TO_pred_template(tpl);
	return BACK;
};


TResult RefUserCondition::back(RefData **&tpl, Session* s, RefData **&l, RefData **&r){
	RefChain *rp  =  s->restoreConditionArg(this);
	if (s->matching(this, leftPart, (*rp)[0], (*rp)[-1], true)){
		s->saveConditionArg(this, rp); // ���������� �������� ������� � ���������
		s->MOVE_TO_next_template(tpl);
		return GO;
	}
	delete rp; // �������� ������� ��� ������ ������ �� �����
	s->MOVE_TO_pred_template(tpl);
	return BACK;
};
