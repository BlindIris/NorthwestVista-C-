//Author: Sarah Manzanares
//Date 09-03/23
//Module 2 Lab 1
//C++ code that calculates the amount for book and which is the best option.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double NumOfCopies;
    double PriceOfEach;
    double PriceOfNet;
    double OptionOne;
    int Delivery = 5000;
    int Published = 20000;
    double OptionTwo;
    double OptionThree;
    double TotalOver;
    double TotalUnder;
    int Over;
    int Under;


    cout << "******** Author Contract Option Program ********\n";
    cout << "\nEnter number of copies estimated to sell: ";
    cin >> NumOfCopies;

    cout << "\nEnter price of each copy: ";
    cin >> PriceOfEach;

    PriceOfNet = NumOfCopies * PriceOfEach;

    OptionOne = Delivery + Published;
    cout << "\nOption 1:   $" << OptionOne;

    OptionTwo = PriceOfNet * .125;
    cout << "\nOption 2:   $" << OptionTwo;

    if (NumOfCopies > 4000)
    {
        Over = NumOfCopies - 4000;
        Over = Over * PriceOfEach;
        TotalOver = Over * 0.14;
        Under = Under * PriceOfEach;
        TotalUnder = NumOfCopies * .1;

        OptionThree = TotalOver + TotalUnder;
    }
    else
    {
        OptionThree = NumOfCopies * 0.1;
    }

    cout << "\nOption 3:   $" << OptionThree;

    if ((OptionOne > OptionTwo) && (OptionOne > OptionThree))
    {
        cout << "\nOption 1 is your best choice!";
    }
    else if ((OptionTwo > OptionOne) && (OptionTwo > OptionThree))
    {
        cout << "\nOption 2 is your best choice!";
    }
    else//((OptiomThree > OptionOne) && (OptionThree > OptionTwo))
    {
        cout << "\nOption 3 is your best choice!";
    }
    return 0;
}
