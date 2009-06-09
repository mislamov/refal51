// D-Refal - sentential program language
// Copyright (C) 2008-2009 Islamov Marat Shamilevich
// islamov.marat@gmail.com
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include "evalutor.h"

#include "datastructs.h"
#include "refsymbolbase.hxx"
#include "rfunction.h"
#include "kernel.h"

// ��������� ������� �� ��� ���, ���� � ��� ���� �������������� ������ <>
// ������� ������� �� ����� ���� ��������
RefChain* evalutor(RefChain *argline, Session *s){
        // long &dc = co::datacount;

        if (! argline->first) return argline;

        RefData *tmpA, *tmpB;
        //std::cout << "\n#### EVALUTOR  " << ((argline->first->pred)?(argline->first->pred->toString()):"$null") << " <--\t\t" << argline->toString() << "\t\t--> " << ((argline->second->next)?(argline->second->next->toString()):"$null") << "\n";

        argline->aroundByDots(); // �������� ������ ���� �� �������� ����� ��� �������� ������� ������

        // ���������� ���� ������
        RefExecBracket *exec    = 0;
        RefWordBase *fn         = 0;
        RefFunctionBase *funk   = 0;
        TVarBodyTable *vars     = 0;
		bool succes;

        for (RefData *it=argline->first; it&&it!=argline->second->getNext(); ){ ////-�������� ����� ����� �����
            exec = ref_dynamic_cast<RefExecBracket>(it);
            if (exec && !exec->is_opened){    // ����� >
                it = exec->getOther()->getPred(); // ��������� ����� ����� <  (����� ���� 0)

                // ��������� ������ �� �������
                fn = ref_dynamic_cast<RefWord>( exec->getOther()->getNext()->getNext());
                if (fn){
                    unistring fname = fn->getValue();
                    funk = s->findMethodFromModule( fname );
                    vars = 0;
                } else {
                    /// todo: ����� ������ �� ���������������� ����������
                    // ����� ����� ������������� ���������� �� ���������
                    SYSTEMERROR("Function name is not RefWord! : " << exec->getOther()->getNext()->getNext()->toString());
                }

                if (fn->getNext() == exec){ // ��������� � ������ ����������  (  <fn >  )
                    tmpA=0;
                    tmpB=fn;
                } else {
                    tmpA=fn->getNext();
                    tmpB=exec->getPred();
                    // ��������� � ����������
                }
                succes = funk && funk->execute(tmpA, tmpB, s);
                if (!succes){
                        SYSTEMERROR("FUNCTION FAILD! : <" << (funk?funk->getName() : fn->getValue() ) << " " << RefChain(fn->getNext(), exec->getPred()).toString() << ">\nView: " << argline->toString());
                }

                delete exec->getOther()->getNext()->getNext(); // ������� ����� - �������� ������ ��������� ������
                delete exec->getOther()->getNext();
                delete exec->getOther();
                delete exec;
                // std::cout << "\n#### VIEWPOLE :: " << argline->toString()  << '\n' << std::flush;
            }

            ///MOVE_TO_next_term(it, 0, s);
            it=it->getNext();
        }


        argline->dearoundByDots(); // ������� ����, ������������ ����������
        //std::cout << "\n\n\n\n#### RETURN EVAL  " << ((argline->first && argline->first->pred)?(argline->first->pred->toString()):"$null") << " <--\t\t" << argline->toString() << "\t\t--> " << ((argline->second && argline->second->next)?(argline->second->next->toString()):"$null") << "\n\n\n\n";

        return argline;

};
