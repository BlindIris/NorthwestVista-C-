/***************************************
  main.cpp
  Week 5
  Created by Sarah Manzanares on 10/13/22
****************************************/

#include <iostream>

using namespace std;

int main()
{
    int LowerNumber = 0;
    int HigherNumber = 0;
    int Multiple3 = 0;
    int Multiple5 = 0;
    int Counter = 0;

    cout << "Hello! Welcome to the Multiples Calculator.\n";
    cout << "We are here to help you sind the multiples in a Range: \n";

    cout << "Please Enter Your Lowest Number: ";
    cin >> LowerNumber;

    cout << "Please Enter Your Highest Number: ";
    cin >> HigherNumber;

    Counter = LowerNumber;

    while ((Counter <= HigherNumber))
    {
        if (Counter % 3 == 0)
        {
            Multiple3++;
        }
        if (Counter % 5 == 0)
        {
            Multiple5++;
        }
        Counter++;
    }

    cout << "\nYour Lowest Number: " << LowerNumber;
    cout << "\nYour Highest Number: " << HigherNumber;
    cout << "\nMultiples of 3 : " << Multiple3;
    cout << "\nMultiple of 5:" << Multiple5 << "\n";

}