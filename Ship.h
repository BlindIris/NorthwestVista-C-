#pragma once

#ifndef Ship_h
#define Ship_h

#include <string>

using namespace std;

class Ship
{
private:
    string ShipName; //variable to store the first name
    string ShipYear;  //variable to store the last name


public:
    //Setters
    void setShipName(string shipName);
    void setShipYear(string shipYear);
    //Getters
    string getShipName() const;
    string getShipYear() const;
    //Constructors
    Ship(string shipName = "", string shipYear = "");

protected:
    void print() const;
};
#endif