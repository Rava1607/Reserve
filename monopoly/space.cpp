#include "space.h"
#include <string>

void Space::add1_house(){
    numOfHouses++;
}

Space::Space(std::string name, int SpaceType, int cost, int costPerHouse, int groupedWith, int numOfHouses, int owner, int rent[6]):
    name(name),SpaceType(SpaceType),cost(cost),costPerHouse(costPerHouse),
    groupedWith(groupedWith),numOfHouses(numOfHouses),owner(owner)
{
    for(int i = 0; i < 6;i++)
    {
        this->rent[i] = rent[i];
    }
}
