/***************************************
  main.cpp
  Week 4
  Created by Sarah Manzanares on 10/04/22
****************************************/

#include <iostream>
using namespace std;

int main()
{
    string PlantOne;
    string PlantTwo;
    double AcreOwn;
    double AcresLeft;
    double PlantOneCost;
    double PlantTwoCost;
    double PlantOneTotal;
    double PlantTwoTotal;
    double TotalCost;
    double Space;

    cout << "Hello! This program is meant to help you with your farm production.\n";
    cout << "Help you calculate how much you will be spending.\n";

    cout << "\nPlease enter the amount of acres you currently own: ";
    cin >> AcreOwn;

    cout << "Please enter the name of the first plant: ";
    cin >> PlantOne;

    cout << "How many acres do you want to use for it? ";
    cin >> Space;

    cout << "How much per seed? ";
    cin >> PlantOneCost;

    cout << "\nPlease enter the name of the second plant: ";
    cin >> PlantTwo;

    cout << "How much per seed? ";
    cin >> PlantTwoCost;

    /* All the equations*/
    AcresLeft = AcreOwn - Space;
    PlantOneTotal = PlantOneCost * Space;
    PlantTwoTotal = PlantTwoCost * AcresLeft;
    TotalCost = PlantOneTotal + PlantTwoTotal;

    /* Showing the data */
    cout << "\nPlant One: " << PlantOne;
    cout << "\tAcres: " << Space;
    cout << "\tCost: " << PlantOneTotal;

    cout << "\nPlant Two: " << PlantTwo;
    cout << "\tAcres: " << AcresLeft;
    cout << "\tCost: " << PlantTwoTotal;

    cout << "\n\nTotal cost for production: " << TotalCost;
    /*Which is spent more*/
    if (AcresLeft > Space)
    {
        cout << "\nYou will spend more on " << PlantTwo << endl;
    }
    else
    {
        cout << "\nYou will spend more on " << PlantOne << endl;
    }
}