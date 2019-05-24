#ifndef SPACE_H
#define SPACE_H

#endif // SPACE_H
#include <string>

enum SpaceType{_Property, _Hostel, _Bomonka, _IncomeTax, _Chance, _Go, _Academ, _Frezer, _GoToAcadem}; //не нужны мб

class Space
{

public:
    Space(std::string name, int SpaceType, int cost, int costPerHouse, int groupedWith, int numOfHouses, int owner, int rent[]);





  std::string name;
  int SpaceType;
  int cost;
  int costPerHouse;
  int groupedWith;
  int numOfHouses;
  int owner;
  int rent[6];

};

