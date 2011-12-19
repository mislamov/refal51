#include "DataChain.h"

#include "direfal.h"

#include <sstream>
#include <cstring>
#include <set>



DataChain::DataChain()
{
	links = 0;
	//ctor
	//before_first_cursor = new DataCursor();
	//after_last_cursor   = new DataCursor();

	DataContainer *contA = new DataContainer(dummy);
	DataContainer *contZ = new DataContainer(dummy);
	before_first_cursor.container = contA;
	after_last_cursor.container = contZ;
	contA->prev = contZ->next = 0;
	contA->next = contZ;
	contZ->prev = contA;

	before_first_cursor.index = 0;
	after_last_cursor.index = 0;
}


DataChain::~DataChain()
{
	//return;
	ref_assert(links==0);
	//dtor
	ref_assert(
		before_first_cursor.container &&
		after_last_cursor.container &&
		before_first_cursor.container->type==dummy &&
		after_last_cursor.container->type==dummy);
	before_first_cursor.container->free();
	before_first_cursor.container = 0; // todo: убрать
	after_last_cursor.container->free();
	after_last_cursor.container = 0; // todo: убрать
}

bool DataChain::isEmpty()
{
	return before_first_cursor.container->next == after_last_cursor.container;
};


DataChain*  DataChain::append(DataContainer *con)
{
	if (con==0){
		int x=0;
		x++;
	}
	ref_assert(con!=0);
	//if (!con) return this;
	ref_assert(con->prev == con->next && con->prev==0);

	DataContainer *A = after_last_cursor.container->prev;
	DataContainer *B = after_last_cursor.container;
	ref_assert(A && B);
	ref_assert(B->type==dummy);

	con->prev = A;
	con->next = B;
	A->next = con;
	B->prev = con;

	return this;
}

// физическое удаление тела цепочки. В chains - исключения
void DataChain::free()
{
	ref_assert(this!=0);
	ref_assert(at_before_first().getType()==dummy && at_after_last().getType()==dummy);

	if (links==0){

		if (! isEmpty()){
			DataCursor cur = at_first();
			DataCursor cur_after_last = at_after_last();
			do
			{
				DataContainer *cont = cur.container;
				cur.next_container();
				//std::cout << "del-cont: " << cont << "\n";
				cont->free();
			}
			while (cur_after_last.container!=cur.container);

			//std::cout << "del-ch: " << this << "\n";
			delete this;
		}
	}
}

DataChain*  DataChain::append_copy(DataCursor cur_prefrom, DataCursor cur_to, ExecContext *context)
{
	if (cur_prefrom==cur_to) return this;
	ref_assert(cur_to.container && cur_to.container->type!=dummy);

	//	static long ii = 0;
	//	ii++;

	//todo: реализовано очень неэффективно (копирование)! обяательно переделать!
	DataCursor i=cur_prefrom+1;

	// если все внутри одного контейнера (array)
	if (i.container == cur_to.container)
	{
		if (i.container->leng==1 /*&& cur_to.container->leng==1*/)
		{
			this->append(i.container->copy(context));
			return this;
		}

		DataContainer *cc = i.container->copy(context);  // todo: увеличение счетчика ссылок на ресурс
		cc->leng = cur_to.index-i.index+1;
		ref_assert(cc->leng > 0);

		if (i.container->type==bytes)
		{
			cc->value.text = i.container->value.text + i.index;
		}
		else if (i.container->type==text)
		{
			cc->value.text = i.container->value.text + i.index; // todo: изменить, когда будет unicode
		}
		else
		{
			notrealisedERRORn;
		}
		this->append( cc );
		return this;
	}

	// если начало цепочки - часть контейнера
	if (i.container->leng > 1 && i.index > 0)
	{
		// нужна лишь часть контейнера (array)
		DataContainerType type = i.container->type;
		DataContainerValue value = i.container->value;
		DataContainer *container = new DataContainer(type, value, i.container->leng - i.index);
		if (type==text)
		{
			container->value.text = i.container->value.text + i.index;
		}
		else if (type==bytes)
		{
			value.text = i.container->value.text + i.index;
			container->value = value; //todo: дебагом проверить нужно ли
		}
		else
		{
			SYSTEMERRORn("UNREALISED");
		}
		this->append(container);
		i.next_container();
	}



	// начинка цепочки
	while(i.container!=cur_to.container)
	{
		this->append(i.container->copy(context));
		i.next_container();
	};


	// конец цепочки
	ref_assert(cur_to.container==i.container);
	if (cur_to.container->leng > 1 && cur_to.index < cur_to.container->leng-1)
	{
		// нужна лишь часть контейнера (array)
		DataContainerType type = cur_to.container->type;
		DataContainerValue value = cur_to.container->value;
		DataContainer *container = new DataContainer(type, value, cur_to.index+1);
		this->append(container);
	}
	else
	{
		this->append(cur_to.container->copy(context));
	}
	return this;
}

unistring buffer_to_unistring(char* buff, size_t len)
{
	//return new unistring(buff, len);
	/// todo: rewrite this!!!
	return std::string(buff);
}

DataChain* text_to_chain(unistring str)
{
	DataChain* ch = new DataChain();
	if (str!="")
	{
		DataContainerValue vv;

		unichar* buff = new unichar[str.length()];
		memcpy(buff, str.c_str(), str.length()*sizeof(unichar));
		vv.text = buff;

		ch->append( new DataContainer(text, vv, str.length()));
	}
	return ch;
}

unistring chain_to_text(DataCursor prebeg, DataCursor end)
{
	if (prebeg==end) return "";

	std::stringstream str;
	DataCursor i = prebeg+1;
	DataCursor iend = end+1;

	do
	{
		switch (i.container->type)
		{
		case integer:
			str << i.container->value.num;
			str << " ";
			break;
		case word:
			str << "\"";
			str << (char*)i.container->value.word.value;
			str << "\" ";
			break;
		case text:
			//str << "\'";
			str.write(i.container->value.text + i.index, i.container->leng-i.index);
			//str << "\' ";
			break;
		case struct_bracket:
			str << " (";
			str << i.container->value.bracket_data.chain->debug();
			str << ") ";
			str << "{" << i.container << "} ";
			break;
		case exec_bracket:
			str << " <";
			str << i.container->value.bracket_data.fname << " ";
			str << i.container->value.bracket_data.chain->debug();
			str << "> ";
			break;
		default:
			str << " UNKNOWN ";
		}

		i.next_container();
	}
	while (i!=iend);

	str << "\0";
	return str.str();
};

unistring DataChain::debug()
{
	std::stringstream str;
	if (this==0)
	{
		str << " /*empty*/ ";
		return str.str();
	}

	DataCursor i = this->at_first();
	DataCursor iend = this->at_after_last();

	while (i!=iend)
	{
		switch (i.container->type)
		{
		case integer:
			str << i.container->value.num;
			str << " ";
			break;
		case word:
			str << "\"";
			str.write((char*)i.container->value.word.value, i.container->value.word.leng);
			//str << (char*)i.container->value.word.value;
			str << "\" ";
			break;
		case text:
			str << "\'";
			str.write(i.container->value.text, i.container->leng);
			//str << (char*)i.container->value.array;
			str << "\' ";
			break;
		case struct_bracket:
			str << " ( ";
			ref_assert(i.container);
			ref_assert(i.container->value.bracket_data.chain);
			str << i.container->value.bracket_data.chain->debug();
			str << " ) ";
			str << "{" << i.container << "->" << i.container->value.bracket_data.chain << "} ";
			break;
		case exec_bracket:
			str << " < ";
			str << i.container->value.bracket_data.fname << " ";
			ref_assert(i.container);
			ref_assert(i.container->value.bracket_data.chain);
			str << i.container->value.bracket_data.chain->debug();
			str << " > ";
			break;
		case dummy:
			str << " DUMMY ";
			break;
		default:
			str << " DEFAULT ";
		}

		//std::cout << ": " << str.str() << "  " << i.container << "\n";
		i.next_container();
	}
	return str.str();
}

