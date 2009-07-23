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

#include "session.h"
#include "rfunction.h"

void SAVE_STATE   (RefData** activeTemplate) {};   // ��������� ��������� ����������
void SAVE_VARSTATE(RefData** activeTemplate) {}; // ��������� ��������� � �������� ����������
void RESTORE_STATE(RefData** activeTemplate) {}; // ��������������� ��������� ����������

void Session::executeExpression(RefChain *&chain) {
/**/
    /// ����� ������ � ��������� ���������
    std::stack<RefData**> openExecs;
    RefData **l_exec,
        **r_exec = chain->first,
        **chain_last = &(chain->first[chain->leng]); // ��-� ����� ����������
    RefExecBracket *tmpBr = 0;
    while (r_exec < chain_last) {
        if (tmpBr = ref_dynamic_cast<RefExecBracket>(*r_exec)) { // > ��� <
            if (! tmpBr->is_opened) { // > - ����� ��, ��� ������
                l_exec = openExecs.top();
                openExecs.pop();
                break;
            }
            // <
            openExecs.push(r_exec);
        }
        ++r_exec;
    }
    if (r_exec == chain_last) { // ������ ���������
        return;
    }


    // ����: l_exec � r_exec
    /// ��������� ���� ������� �� �����������
    #ifdef TESTCODE
    if (! dynamic_cast<RefWord*>(l_exec[1])) SYSTEMERROR("NOt func NAME: " << l_exec[1]->toString() );
    #endif
    RefFunctionBase* function = dynamic_cast<RefFunctionBase *>( this->findFunctionById(  (ref_dynamic_cast<RefWord>(l_exec[1]))->getValue()  ) );
    if (!function) RUNTIMEERROR(l_exec[1]->toString(), "FUNCTION by ID [" << l_exec[1]->toString() << "] NOT DEFINED!");

    // ���������� �������
    RefChain *newchain = function->execute(l_exec[2], r_exec[-1], this);





        /// user function->execute : ������� �����������
        /// ������ matching (����� �������������� �������� �� ��� ���������!)
        /// ���� ����� - substituteExpression �� ������ �����
        /// ����� ��������� ������������
        /// ���� ������� ��� ���� ����������� - ��������� �������


        /// ����� ������ <, ���������� ����� � �������� ��������� (������ ������ ������������)
        /// ���� �������, �� goto ���:

    // ������� ��������� �������� (���� �� �� ������ ������ ������������ - �� � ����������)
    // ������� ��������� + ��������� ��� ���������
/**/
};

// ������� �����������: �������� ���������� ����������. �������� �� � �������� ��������
// ������ �����������
void Session::substituteExpression(RefChain *&chain) {
    // �������� �� ��������� ��������� (RefChain ��������)
    // ���� ����������, �� ��������� ����� �� ��������
};
