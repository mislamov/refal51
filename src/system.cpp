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
#include <fstream>
//#include <stdlib>
//#include <stdlib.h>
#include <time.h>
#include <vector>

#include "system.h"

#include "DataContainer.h"

extern int debug;


DataChain* Dec  (DataCursor prebeg, DataCursor end, ExecContext *context){
	return Sub(prebeg, end, context);
};

DataChain* Div  (DataCursor prebeg, DataCursor end, ExecContext *context){
	++prebeg;
	if (prebeg+1 != end) RUNTIMEERRORn("2 arguments expected");
	if (prebeg.container->type != end.container->type)  RUNTIMEERRORn("different types arguments");
	if (prebeg.container->type != integer)  RUNTIMEERRORn("2 integers expected");
	return (new DataChain())->append(newRefInteger( prebeg.container->value.num / end.container->value.num ));
};

DataChain* Mul  (DataCursor prebeg, DataCursor end, ExecContext *context){
	++prebeg;
	if (prebeg+1 != end) RUNTIMEERRORn("2 arguments expected");
	if (prebeg.container->type != end.container->type)  RUNTIMEERRORn("different types arguments");
	if (prebeg.container->type != integer)  RUNTIMEERRORn("2 integers expected");
	return (new DataChain())->append(newRefInteger( prebeg.container->value.num * end.container->value.num ));
};

DataChain* Sum  (DataCursor prebeg, DataCursor end, ExecContext *context){
	return Add(prebeg, end, context);
};

DataChain* Mod  (DataCursor prebeg, DataCursor end, ExecContext *context){
	++prebeg;
	if (prebeg+1 != end) RUNTIMEERRORn("2 arguments expected");
	if (prebeg.container->type != end.container->type)  RUNTIMEERRORn("different types arguments");
	if (prebeg.container->type != integer)  RUNTIMEERRORn("2 integers expected");
	return (new DataChain())->append(newRefInteger( prebeg.container->value.num % end.container->value.num ));
};

DataChain* Trunc(DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Round(DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Symb (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Chr (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Ord (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* First (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Last (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Lower (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Upper (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* StdLog (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Time (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Mu (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };


DataChain* Numb (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  }; // строку в число

infint Lenw_sys (DataCursor prebeg, DataCursor end, ExecContext *context){
	if (prebeg==end) return 0;
	++prebeg;
	if (prebeg.container==end.container){
		return end.index-prebeg.index+1;
	}

	infint lenw = 0;
	if (prebeg.index > 0){
		lenw += (prebeg.container->leng - prebeg.index);
		prebeg.next_container();
	}

	while (prebeg.container!=end.container){
		lenw += prebeg.container->leng;
		prebeg.next_container();
	}

	lenw += (end.index+1);

	return lenw;
};

DataChain* Lenw (DataCursor prebeg, DataCursor end, ExecContext *context){
	return (new DataChain())->append(newRefInteger( Lenw_sys(prebeg, end, context) ));
};

inline unistring thecompare(infint a, infint b){
	return (a==b)?"0":(a>b?"+":"-");
};

DataChain* Compare (DataCursor prebeg, DataCursor end, ExecContext *context){   // Сравнивает два терма (по перегруженному оператору > или ==)
	++prebeg;
	if (prebeg+1 != end) RUNTIMEERRORn("2 arguments expected");
	if (prebeg.container->type != end.container->type)  RUNTIMEERRORn("different types arguments");
	if (prebeg.container->type != integer)  RUNTIMEERRORn("2 integers expected");
	return (new DataChain())->append(newRefText( thecompare(prebeg.container->value.num, end.container->value.num) ));
};


DataChain* Implode (DataCursor prebeg, DataCursor end, ExecContext *context){
    std::cout << "[[[" << std::flush;
	DataChain *result =  new DataChain();

	unistring chtxt = chain_to_text(prebeg, end);
    std::cout << chtxt << std::flush;

	result->append(newRefWord(chtxt));
	std::cout << "]]]" << std::flush;
	return result;
};



DataChain* Explode (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* ExplodeAll (DataCursor prebeg, DataCursor end, ExecContext *context){ SYSTEMERRORn("NYR"); };



DataChain* Add   (DataCursor prebeg, DataCursor end, ExecContext *context){
	++prebeg;
	DataChain *result = new DataChain();
	DataContainerValue value;
	value.num = prebeg.container->value.num;

	for (DataCursor i=prebeg+1, iend=end+1; i!=iend; ++i){
		if (i.container->type!=integer){
			SYSTEMERRORn("Function Add: bad argument!");
		}
		value.num += i.container->value.num;
	}

	result->append(new DataContainer(integer, value));
	return result;
}

DataChain* Sub   (DataCursor prebeg, DataCursor end, ExecContext *context){
	++prebeg;
	if (prebeg.container->type!=integer || end.container->type!=integer || prebeg.container->next!=end.container){
		SYSTEMERRORn("Function Sub: bad arguments! ");
	}

	DataChain *result = new DataChain();
	DataContainerValue value;
	value.num = prebeg.container->value.num - end.container->value.num;
	result->append(new DataContainer(integer, value));
	return result;
};

DataChain* Mount (DataCursor prebeg, DataCursor end, ExecContext *context){

      size_t length;
      char *buffer;

      std::ifstream is;
	  unistring filename = chain_to_text(prebeg, end);
	  is.open ( filename.c_str(), std::ios::binary );

	  if(! is.is_open()){
		  RUNTIMEERRORs("Can`t open file: " << filename);
	  }

      // get length of file:
      is.seekg (0, std::ios::end);
      length = is.tellg();
      is.seekg (0, std::ios::beg);
	  if (length < 0) {
		  std::cerr << "Can`t open file: " << filename << std::flush;
		  return 0;
	  }

      // allocate memory:
      buffer = new char[length+1];

      // read data as a block:
      is.read (buffer,length);
      is.close();

      DataChain *result = text_to_chain(buffer_to_unistring(buffer, length));

      delete[] buffer;
      return result;


}

DataChain* File  (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Args  (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };

inline unistring readline(std::istream &strm){
	unistring s;
	std::getline(strm, s);
	return s;
}

DataChain* Card  (DataCursor prebeg, DataCursor end, ExecContext *context){
	if (prebeg != end) RUNTIMEERRORn("unexpected argument");

	unistring str = readline(std::cin);
	if (str.length()==0) return std::cin.eof() ? (new DataChain())->append(newRefInteger(0)) : 0;

	/*DataContainerValue value;
	size_t len = str.length();
	unichar *line = new unichar[len];
	strncpy(line, str.c_str(), len);
	value.text = line;
	DataChain *result = (new DataChain())->append(new DataContainer(text, value, len));*/

	DataChain *result = new DataChain();
	result->append( newRefText(str) );
	if (std::cin.eof()){
		result->append( newRefInteger(0) );
	}

	return result;
};

DataChain* Prout (DataCursor prebeg, DataCursor end, ExecContext *context){
	std::cout << chain_to_text(prebeg, end) << '\n' << std::flush;
	return 0;
};

DataChain* ProutDebug (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* StdErr(DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Print (DataCursor prebeg, DataCursor end, ExecContext *context){
	if (prebeg==end) return 0;
	DataChain *chain = new DataChain();
	chain->append_copy(prebeg, end);
	std::cout << chain_to_text(prebeg, end) << "\n" << std::flush;
	return chain;
};

DataChain* Exit  (DataCursor prebeg, DataCursor end, ExecContext *context){
    //SYSTEMERRORn("NYR");
    exit(0);
};

DataChain* RandomIdName(DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };

DataChain* RefalTokens  (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* PrintStackTrace   (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };
DataChain* Eval  (DataCursor prebeg, DataCursor end, ExecContext *context){  SYSTEMERRORn("NYR");  };

DataChain* DebugStart(DataCursor prebeg, DataCursor end, ExecContext *context){ debug = 1; return 0; }
DataChain* DebugStop(DataCursor prebeg, DataCursor end, ExecContext *context){ debug = 0; return 0; }


unistring GetLargestCommonSubstring(const unistring & a, const unistring & b)
{
    const int a_length = a.size();
    const int b_length = b.size();

    int max_length = 0;
    int result_index = 0;

    std::vector<int> solution(b_length + 1, 0);

    for(int i = a_length - 1; i >= 0; i--)
    {
        const std::vector<int> prev_solution = solution;
        for(int j = b_length - 1; j >= 0; j--)
        {
            if(a[i] != b[j])
                solution[j] = 0;
            else
            {
                const int length = 1 + prev_solution[j + 1];
                if (length > max_length)
                {
                    max_length = length;
                    result_index = i;
                }

                solution[j] = length;
            }
        }
    }

    return a.substr(result_index, max_length);
}

DataChain* LCS (DataCursor prebeg, DataCursor end, ExecContext *context){
    if (prebeg==end || ++prebeg==end || prebeg.getType()!=struct_bracket) SYSTEMERRORn("LCS must have 2 bracket argument");
    DataCursor a_br = prebeg;

    if (prebeg==end || (++prebeg).getType()!=struct_bracket) SYSTEMERRORn("LCS must have 2 bracket argument");
    DataCursor b_br = prebeg;

    DataChain* chainA = a_br.container->value.bracket_data.chain;
    DataChain* chainB = b_br.container->value.bracket_data.chain;

    unistring a = chain_to_text(chainA->at_before_first(), chainA->at_last());
    unistring b = chain_to_text(chainB->at_before_first(), chainB->at_last());

	return (new DataChain())->append(newRefText(GetLargestCommonSubstring(a, b)));
};

