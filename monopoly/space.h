#ifndef SPACE_H
#define SPACE_H

#endif // SPACE_H
#include "Player.h"
#include <string>

enum SpaceType{_Property, _Hostel, _Bomonka, _IncomeTax, _Chance, _Go, _Academ, _Frezer, _GoToAcadem};
class Space
{
public:
    Space(string name, int SpaceType, int cost, int costPerHouse, int groupedWith, int numOfHouses, int owner, int rent[0], int rent[1], int rent[2], int rent[3], int rent[4], int rent[5]);
    int get_Owner();
    void add1_house();


private:

  string name;
  int cost;
  int rent[6];
  int costPerHouse;
  int groupedWith;
  int numOfHouses;
  int owner;
  int SpaceType;

};

