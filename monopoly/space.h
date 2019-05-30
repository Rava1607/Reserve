#ifndef SPACE_H
#define SPACE_H

#endif // SPACE_H
#include <string>

enum SpaceType{_Property = 0, _Hostel, _Bomonka, _Chance, _IncomeTax, _Go, _Academ, _Frezer, _GoToAcadem}; //не нужны мб

class Space
{

public:
    Space(std::string name, int SpaceType, int cost, int costPerHouse, int groupedWith, int numOfHouses, int owner, int rent[]);
    void add1_house();





  std::string name;
  int SpaceType;
  int cost;
  int costPerHouse;
  int groupedWith;
  int numOfHouses;
  int owner;
  int rent[6];
  int actrent;

};

