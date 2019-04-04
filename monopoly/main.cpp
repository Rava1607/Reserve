#include <iostream>
#include <vector>
#include "Player.h"
#include "space.h"
using namespace std;




void initGame(int numPlayers);
void PayRent(int rent);
void Property(int curPos);
void Hostel();
void Bomonka(int diceRoll);
void IncomeTax();

void endGame(){
    gameEnd=true;
}
void buySpace(int player);
void houseBuy(int player);
bool evaluateHouse();

int main()
{
    int numOfPlayers;
    cout<<"Skolko people play game"<<endl;
    cin >> numOfPlayers;
    vector<int> Players;
    for(int i; i < numOfPlayers; i++){
         Players.push_back(new Player());
    }


}
