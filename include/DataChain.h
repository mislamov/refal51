#ifndef DATACHAIN_H
#define DATACHAIN_H

//#include "DataContainer.h"
#include "DataCursor.h"
#include "config.h"


class DataContainer;

class DataChain
{
    public:
        DataChain();
        ~DataChain();

       	DataChain*  append(DataContainer *con);
       	DataChain*  append_copy(DataCursor cur_from, DataCursor cur_to);

       	DataCursor at_before_first(){ return before_first_cursor; };
       	DataCursor at_last(){ return after_last_cursor-1; };
       	DataCursor at_first(){ return before_first_cursor+1; };
       	DataCursor at_after_last(){ return after_last_cursor; };

        bool isEmpty();
        void free(/*DataCursor cur_prefrom, DataCursor cur_to*/);

        unistring debug();
    protected:
    private:
        DataCursor before_first_cursor;
        DataCursor after_last_cursor;
};

unistring buffer_to_unistring(char* buff, size_t len);
DataChain* text_to_chain(unistring);
unistring chain_to_text(DataCursor prebeg, DataCursor end);




#endif // DATACHAIN_H
