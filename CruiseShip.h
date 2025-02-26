#pragma once
#ifndef CruiseShip_h
#define CruiseShip_h
#include "Ship.h"
#include <stdio.h>
class CruiseShip : public Ship
{
private:
    int MaxPassengers;

public:
    //Constructor
    CruiseShip(string shipName, string shipYear, int maxPassengers);

    //getters
    int getMaxPassengers() const;

    //setters
    void setMaxPassengers(int maxPassengers);

    //Print function
    void PrintCruiseShipInfo();
};

#endif /* CruiseShip_h */