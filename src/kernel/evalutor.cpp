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

        ///todo: ��������� ������ ����������������� - ����� ������� � �������� (�������� ����� ���� ������������ �� � ������ ���������)
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

        for (RefData *it=argline->first; it&&it!=argline->second->next; ){
        //for (RefData *it=argline->first; it&&it!=argline->second->next; move_to_next_term(it, 0, s)){
            exec = ref_dynamic_cast<RefExecBracket>(it);
            ////exec = ref_dynamic_cast<RefExecBracket *>(it);
            if (exec && !exec->isOpen()){    // ����� >
                it = exec->getOther()->pred; // ��������� ����� ����� <  (����� ���� 0)

                // ��������� ������ �� �������
                fn = ref_dynamic_cast<RefWord>( exec->getOther()->next->next);
                if (fn){
                    unistring fname = fn->getValue();
                    funk = s->findMethodFromModule( fname );
                    vars = 0;
                } else {
                    /// todo: ����� ������ �� ���������������� ����������
                    // ����� ����� ������������� ���������� �� ���������
                    SYSTEMERROR("Function name is not RefWord! : " << exec->getOther()->next->next->toString());
                }

                if (fn->next == exec){ // ��������� � ������ ����������  (  <fn >  )
                    tmpA=0;
                    tmpB=fn;
                } else {
                    tmpA=fn->next;
                    tmpB=exec->pred;
                    // ��������� � ����������
                }
                succes = funk && funk->execute(tmpA, tmpB, s);
                if (!succes){
                        SYSTEMERROR("FUNCTION FAILD! : <" << (funk?funk->getName() : fn->getValue() ) << " " << RefChain(fn->next, exec->pred).toString() << ">\nView: " << argline->toString());
                }

                delete exec->getOther()->next->next; // ������� ����� - �������� ������ ��������� ������
                delete exec->getOther()->next;
                delete exec->getOther();
                delete exec;
                // std::cout << "\n#### VIEWPOLE :: " << argline->toString()  << '\n' << std::flush;
            }

            while((it = it->next_term(0, s)) && it->is_system()); // ��������
        }


        argline->dearoundByDots(); // ������� ����, ������������ ����������
        //std::cout << "\n\n\n\n#### RETURN EVAL  " << ((argline->first && argline->first->pred)?(argline->first->pred->toString()):"$null") << " <--\t\t" << argline->toString() << "\t\t--> " << ((argline->second && argline->second->next)?(argline->second->next->toString()):"$null") << "\n\n\n\n";

        return argline;

};
