#ifndef SPACE_H
#define SPACE_H

#endif // SPACE_H
#include <string>

<<<<<<< HEAD
enum SpaceType{_Property, _Hostel, _Bomonka, _IncomeTax, _Chance, _Go, _Academ, _Frezer, _GoToAcadem}; //не нужны мб

=======
enum SpaceType{_Property, _Hostel, _Bomonka, _IncomeTax, _Chance, _Go, _Academ, _Frezer, _GoToAcadem}; //не нцжны мб
>>>>>>> a2a124222a1f06f28fed90f58f5cd197686c32b1
class Space
{

public:
<<<<<<< HEAD
    Space(std::string name, int SpaceType, int cost, int costPerHouse, int groupedWith, int numOfHouses, int owner, int rent[]);




=======
    Space(string name, int SpaceType, int cost, int costPerHouse, int groupedWith, int numOfHouses, int owner, int rent[0], int rent[1], int rent[2], int rent[3], int rent[4], int rent[5]);




>>>>>>> a2a124222a1f06f28fed90f58f5cd197686c32b1

  std::string name;
  int SpaceType;
  int cost;
  int costPerHouse;
  int groupedWith;
  int numOfHouses;
  int owner;
  int rent[6];

};

