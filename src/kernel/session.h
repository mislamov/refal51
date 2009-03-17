#ifndef SESSION_H
#define SESSION_H

#include <map>
#include <stack>
#include <list>
#include <pair.h>

//#include "kernel.h"
//#include "datastructs.h"
#include "core.h"
#include "data.h"
#include "rfunction.h"

class DataForRepeater;
class TVarBody;
class Session;
class SessionOfMaching;
class DataForRepeater;
class RefModuleBase;
class RefFunctionBase;
class RefTemplateBridgeVar;

class TVarBodyTable : public std::map<unistring, TVarBody*>{};

// тело сопоставленной переменной
class TVarBody : public pair<RefData *, RefData *>{
    unistring sss;

public:
    RefObject *owner;        // ссылка на переменную-владельца данного тела

    // сделал стек, так как у внешнего шаблона могут быть условия, а значит несколько субсессий при сопоставлении
    std::list<SessionOfMaching*> sessStack;  // состояние внешней переменной во время сопоставления

    TVarBody(RefData* l, RefData* r, RefObject* o);
    unistring toString();
    TVarBody * folowByWay(unistring path);
};


/*
    Класс SessionOfMaching - подсессия сопоставлений (состояние сессии).

    После выполнения функции (успешного или нет), сессия должна быть в исходном состоянии, а все новое кроме результата и
        глобальных данных - мусор
    После провального матчинга условия - сессия д.б. исходной. Все новое - мусор
    После успешного матчинга условия - все новое нужно сохранить для возможного отката

    Пользовательский шаблон: это будет TemplateItem c сылками на концы тела. В сессии сделать специальный стек/мап указателей на точки возврата пользовательскоо шаблона при сопоставлении.
*/
class SessionOfMaching  : public RefObject {
        public:
                bool isfar; // признак того, что субсессия создается для внешнего сопоставления (чужое поле зрения)
        public:
                RefChain *pole_zrenija;		   // begin- и end-шаблон (поле зрения)

                std::stack<RefBracketBase  *>	StackOfDataSkob;	    // Стек ЗАКР. скобок в векторе данных
                //std::stack<RefData *>	        StackOfGroupSkob;	    // Стек указателей на ПЕРЕДначало ОВ для группы - а надо ли
                //std::stack<DataForRepeater *>	StackOfRepeatSkob;	    // Стек итераций повторителей
                //std::stack<DataForRepeater *>	StackOfRepeatSkobDoned;	// Стек итераций повторителей для успешно сопоставленных
                std::stack<ref_variant_vert*> StackOfVariants;	        // Стек удачно сопоставленных вариантов (ссылки на границы последнего варианта)

                std::stack<infint> StackOfRepeater;	        // Стек активных повторителей
                std::stack<infint> StackOfRepeaterDoned;	    // Стек удачно сопоставленных повторителей

                RefData *activeTemplate; // последнее активное выражение шаблона в сопоставлении (использовать вне matching ОПАСНО!)
                RefTemplateBridgeVar *templReturnBackPoint;// точка возврата при сопоставлении внешних шаблонов


                TVarBodyTable varTable;		          // Таблица переменных  имя -> ссылка на элемент стека
                std::stack<TVarBody*> StackOfSopost; // Стек хранителей состояний шаблонов
                //RefData*    StopBrackForceVar;	// Конечная точка (шаблон) принудительного отката. ?: нужно ли в подсессию?

                // создает и возвращает субсессию (точку восстановления)
                SessionOfMaching(RefData *argLeft, RefData *argRight){
                    //varTable = new TVarBodyTable();

                    isfar = false;
                    pole_zrenija = (new RefChain(argLeft, argRight))->aroundByDots();
                    StackOfDataSkob.push(dynamic_cast<RefData_DOT *>(pole_zrenija->second));
                    //StopBrackForceVar = 0;
                    templReturnBackPoint = 0;
                }

                // создает точку внутри субсессии. Нужно для сопоставления внешних шаблонов
                SessionOfMaching(RefChain *pz){

                    isfar = true;
                    templReturnBackPoint = 0;
                    pole_zrenija = pz;
                    //StopBrackForceVar = 0;
                }

                // очищает точку восстановления с удалением мусора
                virtual ~SessionOfMaching(){
                    if (! isfar){
                        // удаление  датадот
                        delete pole_zrenija->first;  // в деструкторе ссылки боковых точек выравниваются
                        delete pole_zrenija->second; // в деструкторе ссылки боковых точек выравниваются
                    }
                    // сборка мусора
                    //LOG(" garbage collector nema!");

                }

                unistring toString() { return "SessionOfMaching"; };
};


//////////////////////////////////////////////////////////////////
// Данные для процесса вычисления функции (сессия сопоставления)
class Session : public RefObject {

  private:
    RefChain*  deinitializationArg();               //  откат регистрации ОО в initialization
    void  initializationArg(RefData*, RefData*);    //  регистрация ОО для сапостовления. приставка дот

  public:
    int fcalls;
    unsigned long step;

    TResult result_sost;     // последний статус в сопоставлении. Внешнее изменение: ref_variant_dot::pred_point
    TMessage message4nextpred; // через эту переменную методы init и back могут передавать указание методам next_point и pred_point

    // данные
    std::map <unistring, RefModuleBase*>  modules;  //  подгруженные модули
    std::list <SessionOfMaching *> matchSessions;  //  стек состояний сопоставлений

    // методы
    TVarBody*   getVarBody( unistring vname );
    TVarBody*   setVarBody( unistring vname, TVarBody* );
    RefObject*  getObjectByName(unistring name, Session *s=0); // ищет объект (функция/шаблон) во всех модулях
    RefTemplateBridgeVar * getTemplReturnBackPoint();  // ищет и возвращает последнюю точку возврата внешней переменной

    unistring varTableToText();

    Session();
    ~Session();

    void  SaveTemplItem   (RefData* var, RefData* l, RefData* r); // если аргумент - переменная, то добавляем ее состояние
    void  RestoreTemplItem(RefData *owner, RefData* &l, RefData* &r ); // извлекаем последнее сохраненное сост-е

    bool  matching(RefChain *tmplate, RefData*l, RefData*r, bool isdemaching=false); // сопоставляет шаблон tmplate с объектным выражением. isdemaching - признак того, что надо продолжить матчинг от предыдущего удачного состояния (напр в цепочке условий)

    std::stack<TVarBody*> *getCurrentSopostStack(){
        #ifdef DEBUG
        if (matchSessions.empty()){
            showStatus(); SYSTEMERROR("matchSessions is EMPTY !");
        }
        #endif
        return &(matchSessions.back()->StackOfSopost);



    }

    inline std::stack<RefBracketBase  *>  *getStackOfDataSkob(){ return &(matchSessions.back()->StackOfDataSkob); }
    inline RefChain *getPole_zrenija(){ return matchSessions.back()->pole_zrenija; }

    // готовит правую часть для сопоставления - подстановка переменных. В сессии, потому что нужна таблица переменных
    RefChain *RightPartToObjectExpression(RefChain *);

    void regModule(RefModuleBase *);
    RefFunctionBase* findMethodFromModule(unistring);

    virtual unistring toString(){ return "Session"; };
    void showStatus();




};




/*
class DataForRepeater {
public:
    RefData *owner; //?
    unsigned long from, to;	// границы количества допутимых проходов
    long step;
    long mustbe;	//?
    long maxstep;	//?
    unsigned long current_step;	// число активных проходов
    RefData *leftPoint;	// левый край захватывемой подцепочки

    DataForRepeater(RefData *o);
    std::string toString(){ return ("@DataForRepeater:owner=" + owner->toString()); }
};*/

#endif
