#include <iostream>
#include "CargoShip.h"

CargoShip::CargoShip(string shipName, string shipYear, int cargoCapacity) :Ship(shipName, shipYear)
{
    CargoCapacity = cargoCapacity;
}

//getters
int CargoShip::getCargoCapacity() const
{
    return CargoCapacity;
}

//setters
void CargoShip::setCargoCapacity(int cargoCapacity)
{
    CargoCapacity = cargoCapacity;
}

//Print function
void CargoShip::PrintCargoShipInfo()
{
    print();
    cout << "\nCargo Capacity: " << CargoCapacity << " tonnes" << endl;
}