
#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

void Ship::print() const
{
    cout << "\nShip Name : " << ShipName << "\nShip Year : " << ShipYear << endl;
}

void Ship::setShipName(string shipName)
{
    ShipName = shipName;
}

void Ship::setShipYear(string shipYear)
{
    ShipYear = shipYear;
}

string Ship::getShipName() const
{
    return ShipName;
}

string Ship::getShipYear() const
{
    return ShipYear;
}

//constructor
Ship::Ship(string shipName, string shipYear)
{
    ShipName = shipName;
    ShipYear = shipYear;
}