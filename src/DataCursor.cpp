#include "DataCursor.h"

#include "config.h"
#include "DataContainer.h"


void DataCursor::next_container()
{
    ref_assert(container && container->type!=dummy);
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
};

DataCursor::DataCursor (int i)
{
    ref_assert(i==0);
    container=0;
    index=0;
};



DataCursor& DataCursor::operator-- ()
{
    ref_assert( container!=0 && container->leng>0);
    if (container->leng==1 || index==0)
    {
        // ����������� ����� ������������
        container = container->prev;
        index = container->leng-1;
        return *this;
    }
    // ����������� ������ ����������
    --index;
    return *this;
}

DataCursor DataCursor::operator-(const int& i)
{
    ref_assert(i==1);
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

/*bool DataCursor::isFirstInComplexData(){
    if (index==)
}

bool DataCursor::isLastInComplexData(){

}*/

void DataCursor::replaceBy(DataChain *chain)
{
    ref_assert(container!=0);
    ref_assert(container->type==exec_bracket); // ���� ������������ ������ ��� ������ <> �� ���������

    DataContainer *aa = container->prev;
    DataContainer *ab = container->next;

    if (!chain || chain->isEmpty())
    {
        aa->next = ab;
        ab->prev = aa;
        //return;
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

    // ������� �� �������� ������
    if (chain) delete chain;
    DataChain * oldChain = container->value.bracket_data.chain;
    //std::cout << "-- " << oldChain->debug() << "\n";
    ref_assert(oldChain);
    oldChain->free();
    delete oldChain;
    delete container;
}


DataCursor& DataCursor::operator++ ()
{
    ref_assert( container!=0 && container->leng>0);

    if (container->leng==1 || index+1==container->leng)
    {
        // ����������� ����� ������������
        container = container->next;
        ref_assert(container->leng!=0 || container->type==dummy);
        index = 0;
        return *this;
    }
    // ����������� ������ ����������
    ++index;
    return *this;
}

