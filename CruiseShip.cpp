#include <iostream>
#include "CruiseShip.h"

CruiseShip::CruiseShip(string shipName, string shipYear, int maxPassengers) :Ship(shipName, shipYear)
{
    MaxPassengers = maxPassengers;
}

//getters
int CruiseShip::getMaxPassengers() const
{
    return MaxPassengers;
}

//setters
void CruiseShip::setMaxPassengers(int maxPassengers)
{
    MaxPassengers = maxPassengers;
}

//Print function
void CruiseShip::PrintCruiseShipInfo()
{
    print();
    cout << "\nMax Number of Passengers: " << MaxPassengers << endl;
}