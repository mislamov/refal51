#include "evalutor.h"

#include "datastructs.h"
#include "refsymbolbase.hxx"
#include "rfunction.h"
#include "kernel.h"

// ��������� ������� �� ��� ���, ���� � ��� ���� �������������� ������ <>
// ������� ������� �� ����� ���� ��������
RefChain* evalutor(RefChain *argline, Session *s){
        /*
        #ifdef DEBUG
        if (! dynamic_cast<RefData_DOT *>(argline->first) )
            SYSTEMERROR("evalutor( argline->first != RefDATA_DOT, ...) !\nevalutor( " << argline->toString() << " )");
        if (! dynamic_cast<RefData_DOT *>(argline->second) )
            SYSTEMERROR("evalutor(..., argline->second != RefDATA_DOT) !\nevalutor( " << argline->toString() << " )");
        #endif
        */
        /*
        if ( dynamic_cast<RefExecBracket *>(argline->first) )
            SYSTEMERROR("evalutor( argline->first is RefExecBracket ) !\nevalutor( " << argline->toString() << " )");
        if ( dynamic_cast<RefExecBracket *>(argline->second) )
            SYSTEMERROR("evalutor( argline->second is RefExecBracket ) !\nevalutor( " << argline->toString() << " )");
        */

///todo: ��������� ������ ����������������� - ����� ������� � �������� (�������� ����� ���� ������������ �� � ������ ���������)
if (! argline->first) return argline;

//std::cout << "\n#### EVALUTOR  " << ((argline->first->pred)?(argline->first->pred->toString()):"$null") << " <--\t\t" << argline->toString() << "\t\t--> " << ((argline->second->next)?(argline->second->next->toString()):"$null") << "\n";

        argline->aroundByDots(); // �������� ������ ���� �� �������� ����� ��� �������� ������� ������

        // ���������� ���� ������
        RefExecBracket *exec    = 0;
        RefWordBase *fn         = 0;
        RefFunctionBase *funk   = 0;
        TVarBodyTable *vars     = 0;
        for (RefData *it=argline->first; it&&it!=argline->second->next; move_to_next_point(it, 0, s)){
            exec = dynamic_cast<RefExecBracket *>(it);
            if (exec && !exec->isOpen()){    // ����� >
                it = exec->getOther()->pred; // ��������� ����� ����� <  (����� ���� 0)

                // �������� ������ �� �������
                fn = dynamic_cast<RefWord *>(exec->getOther()->next->next);
                if (fn){
                    unistring fname = fn->getValue();
                    funk = s->findMethodFromModule( fname );
                    vars = 0;
                } else {
                    /// todo: ����� ������ �� ���������������� ����������
                    // ����� ����� ������������� ���������� �� ���������
                    SYSTEMERROR("Function name is not RefWord! : " << exec->getOther()->next->next->toString());
                }

                bool succes = funk; // ��������� ������ ������� �� �����

                if (fn->next == exec){ // ��������� � ������ ����������  (  <fn >  )
                    succes = succes && funk->execute(0, fn, s);
                } else {
                    // ��������� � ����������
                    succes = succes && funk->execute(fn->next, exec->pred, s);  //   <fn  fn_next..exec_pred>
                }
                if (!succes){
                        SYSTEMERROR("FUNCTION FAILD! : <" << (funk?funk->getName() : fn->getValue()+"[$null]") << " " << RefChain(fn->next, exec->pred).toString() << "\nPOLEZ: " << argline->toString());
                }

                delete exec->getOther()->next->next; // ������� ����� - �������� ������ ��������� ������
                delete exec->getOther()->next;
                delete exec->getOther();
                delete exec;

                //std::cout << "\n#### VIEWPOLE :: " << argline->toString() << std::flush;
            }
        }


        argline->dearoundByDots(); // ������� ����, ������������ ����������
        //std::cout << "\n\n\n\n#### RETURN EVAL  " << ((argline->first && argline->first->pred)?(argline->first->pred->toString()):"$null") << " <--\t\t" << argline->toString() << "\t\t--> " << ((argline->second && argline->second->next)?(argline->second->next->toString()):"$null") << "\n\n\n\n";

        return argline;

};
