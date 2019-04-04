#ifndef MONOPOLY_H
#define MONOPOLY_H

#endif // MONOPOLY_H
#include <string>

class Player{
public:

    Player();
    int get_bomonkaVisiting();
    int add1_bomonkaVisiting();
    int get_money();
    void GoToAcadem();
    bool evaluateAcadem(int dice1, int dice2);
    void kickPlayer();
    void buyHouse();
    void Chance();


private:
    int money;          //денюжки
    int curPos;         //Позиция
    int bomonkaVisiting;         //Число посещений бомонки(на 3 раз - исключение(конец игры для игрока))
    int numOfHostel;         //Число общежитий
    bool inAcadem;            //В академе
    int inAcademCounter;          //Дней в академе
    bool inGame;            //В игре

};


