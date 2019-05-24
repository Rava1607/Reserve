#include "space.h"
<<<<<<< HEAD
#include <string>
=======
Space::Space(string name, int SpaceType, int cost, int costPerHouse, int groupedWith, int numOfHouses, int owner, int rent[0], int rent[1], int rent[2], int rent[3], int rent[4], int rent[5])
{
    this->name=name;
    this->cost=cost;
    for (int i = 0; i < 6; i++){
        this->rent[i]=rent[i];
    }
    this->costPerHouse=costPerHouse;
    this->groupedWith=groupedWith;
    this->numOfHouses=numOfHouses;
    this->owner=owner;
    this->SpaceType=SpaceType;
}
>>>>>>> a2a124222a1f06f28fed90f58f5cd197686c32b1

void Space::add1_house(){
    numOfHouses++;
}
<<<<<<< HEAD

Space::Space(std::string name, int SpaceType, int cost, int costPerHouse, int groupedWith, int numOfHouses, int owner, int rent[6]):
    name(name),SpaceType(SpaceType),cost(cost),costPerHouse(costPerHouse),
    groupedWith(groupedWith),numOfHouses(numOfHouses),owner(owner)
{
    for(int i = 0; i < 6;i++)
    {
        this->rent[i] = rent[i];
    }
}
=======
>>>>>>> a2a124222a1f06f28fed90f58f5cd197686c32b1
