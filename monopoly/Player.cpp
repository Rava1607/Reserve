#include "Player.h"
#include "space.h"


Player::Player(){
    curPos = 0;
    inAcadem = false;
    inAcademCounter = 0;
    money = 1500;
    numOfHostel = 0;
    inGame = true;
    bomonkaVisiting = 0;

}
int Player::get_bomonkaVisiting()
{
    return bomonkaVisiting;
}

int Player::add1_bomonkaVisiting()
{
   bomonkaVisiting++;
}

int Player::get_money(){
    return money;
}

void Player::GoToAcadem(){
    inAcadem = true;
    curPos=8;
}

bool Player::evaluateAcadem(int dice1, int dice2){
    if (dice1==dice2){
        inAcadem = false;
        Move(dice1+dice2)
    }
    else if (inAcademCounter < 3){

    inAcademCounter++;
    }
    else{
        money+=50;
        inAcadem = false;
        Move(dice1+dice2);
    }
    else (money<0){
        kickPlayer();
    }
    return true;

}

void Player::Bomonka(){
    {
      if(bomonkaVisiting<3)
        bomonkaVisiting++;
    }
    else
    {
        kickPlayer();
    }
}

void Player::kickPlayer(){
    inGame= false;
}

void Player::Move(int numOfSpaces)
{
    curPos += numOfSpaces;
    if (curPos >= 40)
            {
              curPos -= 40;  //прошел старт
              money += 200;
            }

}

void Player::buyHouse(int boardPos){
    money -= ;
}





void Hostel(){
    if (board[Player.curPos].owner==
}




void Player::Chance(){
            int num = (rand() % 5);

            switch (num)
            {
                case 0:
                    money += 10;
                    break;
                case 1:
                    money += 20;
                    break;
                case 2:
                    money += 30;
                    break;
                case 3:
                    money -= 10;
                    break;
                case 4:
                    money -= 20;
                    break;
            }

            if(money <= 0)
            {
                killPlayer();
            }
        }


void buySpace(curPos){
    if (board[Player.curPos]=)
}

bool evaluateHouse(){

}
