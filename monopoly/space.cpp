#include "space.h"
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
int Space::get_Owner()
{
    return owner;
}
void Space::add1_house(){
    numOfHouses++;
}
int Space::get_costPerHouse(){
    return costPerHouse;
}

int Space::get_owner(){
    return owner;
}

int Space::get_SpaceType(){
    return SpaceType;
}

int Space::get_numOfHouses(){
    return numOfHouses;
}

int Space::get_groupedWith(){
    return groupedWith;
}
