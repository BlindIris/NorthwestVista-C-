#pragma once
#ifndef CargoShip_h
#define CargoShip_h
#include "Ship.h"
#include <stdio.h>
class CargoShip : public Ship
{
private:
    int CargoCapacity;

public:
    //Constructor
    CargoShip(string shipName, string shipYear, int cargoCapacity);

    //getters
    int getCargoCapacity() const;

    //setters
    void setCargoCapacity(int cargoCapacity);

    //Print function
    void PrintCargoShipInfo();
};

#endif /* CargoShip_h */