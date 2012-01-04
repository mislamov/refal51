#include "DataCursor.h"

#include "config.h"
#include "DataContainer.h"

long DataCursor::sys = 0;

void DataCursor::next_container()
{
    ref_assert(container && container->type!=dummy);
	ref_assert(container->next);
    container=container->next;
    index=0;
    ref_assert(container->leng!=0 || container->type==dummy);
};

DataContainerType DataCursor::getType()
{
    return container->type;
};

DataCursor::DataCursor (DataContainer* c, size_t idx)
{
    container = c;
    index = idx;
	sys++;
};

DataCursor::DataCursor (int i)
{
    ref_assert(i==0);
    container=0;
    index=0;
	sys++;
};



DataCursor&
 DataCursor::operator-- ()
{
    ref_assert( container!=0 && container->leng>0);
    if (container->leng==1 || index==0)
    {
        // перемещение между контейнерами
        container = container->prev;
        index = container->leng-1;
        return *this;
    }
    // перемещение внутри контейнера
    --index;
    return *this;
}

DataCursor DataCursor::operator-(const int& i)
{
    ref_assert(i==1);
	if (container==0){
	}
    ref_assert(container!=0);

    DataCursor result = *this;
    --result;
    return result;
}

DataCursor DataCursor::operator+(const int& i)
{
    ref_assert(i==1);
    ref_assert(container!=0);

    DataCursor result = *this;
    ++result;
    return result;
}



bool DataCursor::operator! ()
{
    return container==0;
}


// курсор смотрит на контейнер с <>-функциональным вызовом
// данная функция заменяет данный контеней подцепочкой chain, затем удаляет старый контейнер вместе со всем содержимым,
// за исключением цепочек из chains
void DataCursor::replaceBy(DataChain *chain)
{
    ref_assert(container!=0);
    ref_assert(container->type==exec_bracket); // пока используется только для замены <> на результат
    ref_assert(!chain || (chain->at_before_first().getType()==dummy && chain->at_after_last().getType()==dummy));

    DataContainer *aa = container->prev;
    DataContainer *ab = container->next;

    if (!chain || chain->isEmpty())
    {
        aa->next = ab;
        ab->prev = aa;
    }
    else
    {
        DataContainer *ba = chain->at_first().container;
        DataContainer *bb = chain->at_last().container;

        aa->next = ba;
        ab->prev = bb;
        ba->prev = aa;
        bb->next = ab;

        chain->at_before_first().container->next = chain->at_after_last().container;
        chain->at_after_last().container->prev = chain->at_before_first().container;
    }

	ref_assert(aa->next->prev == aa);
	ref_assert(ab->prev->next == ab);

    // очистка от ненужных данных
    /*if (chain) {
		chain->free(); // удаление обертки результата функции - удаляется при очистке стека чайнов
	}*/
    DataChain * oldChain = container->value.bracket_data.chain;
    ref_assert(oldChain);
    //oldChain->free(); // удаление старой цепочки (будет удалена в след строке? )
    container->free();
}


DataCursor& DataCursor::operator++ ()
{
    ref_assert( container!=0 && container->leng>0);

    if (container->leng==1 || index+1==container->leng)
    {
        // перемещение между контейнерами
        container = container->next;
        ref_assert(container->leng!=0 || container->type==dummy);
        index = 0;
        return *this;
    }
    // перемещение внутри контейнера
    ++index;
    return *this;
}

