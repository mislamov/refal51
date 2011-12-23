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


// ������ ������� �� ��������� � <>-�������������� �������
// ������ ������� �������� ������ �������� ����������� chain, ����� ������� ������ ��������� ������ �� ���� ����������,
// �� ����������� ������� �� chains
void DataCursor::replaceBy(DataChain *chain)
{
    ref_assert(container!=0);
    ref_assert(container->type==exec_bracket); // ���� ������������ ������ ��� ������ <> �� ���������
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

    // ������� �� �������� ������
    if (chain) {
		chain->free(); // �������� ������� ���������� �������
	}
    DataChain * oldChain = container->value.bracket_data.chain;
    ref_assert(oldChain);
    oldChain->free(); // �������� ������ �������
    container->free();
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

