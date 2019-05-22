#ifndef MONOPOLY_H
#define MONOPOLY_H

#endif // MONOPOLY_H
#include <string>

class player{
public:



    int playerID;
    int money;          //денюжки
    int curPos;         //Позиция
    int bomonkaVisiting;         //Число посещений бомонки(на 3 раз - исключение(конец игры для игрока))
    int numOfHostel;         //Число общежитий
    bool inAcadem;            //В академе
    int inAcademCounter;          //Дней в академе
    bool playerHasLost;            //В игре

};


