//Author: Sarah Manzanares
//Date 09/09/23
//Module 4 Lab 2
//C++ code using parallel arrays to populate the CarName and MPG and using a function to find is its economkical or a gas guzzler
#include <iostream>
#include <iomanip>
using namespace std;

//Create my Array_Size 
const int Array_Size = 5;
//This is to declare my function 
void ReportCar(string[], double[]);

int main()
{
    //This is my parallel array for CarName and for MPG
    string CarName[Array_Size] = { "Civic", "Focus", "Tundra", "Blazor", "Smart Car" };
    double MPG[Array_Size] = { 36.7, 23.5, 67.5, 12.4, 46.3 };

    //This is to call my function using CarName and MPG arrays as parameters
    ReportCar(CarName, MPG);
}

//This is a viad that outputs the finding of Eco or GG and outputs the array
void ReportCar(string pCarName[], double pMPG[])
{
    //This is a for loop to go though both Arrays
    for (int index = 0; index < Array_Size; index++)
    {
        //This is the bar that decides whether or not it is eco or GG
        double TheBar = 30.0;

        //This is to output whether or not its a Eco car or a GG car
        if (pMPG[index] >= TheBar)
        {
            cout << "Car: " << pCarName[index] << endl;
            cout << "\tMPG: " << pMPG[index] << endl;
            cout << "\tIt is Economical!" << endl;
        }
        else
        {
            cout << "Car: " << pCarName[index] << endl;
            cout << "\tMPG: " << pMPG[index] << endl;
            cout << "\tIt is a Gas Guzzler!" << endl;
        }
    }
}