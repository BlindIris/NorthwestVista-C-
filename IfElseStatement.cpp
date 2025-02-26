/***************************************
  main.cpp
  Week 3
  Created by Sarah Manzanares on 9/29/22
****************************************/

#include <iostream>

using namespace std;

int main()
{
    int Number;

    cout << "Hello! Thank you for joining our survey.\n";
    cout << "Please enter a number that is not a decimal:";
    cin >> Number;

    cout << "\nYou have entered: ";
    cout << Number;

    if (Number > 0)
    {
        cout << "\nYou have entered a positive number!\n";
    }
    else if (Number < 0)
    {
        cout << "\nYou have entered a negative number!\n";
    }
    else
    {
        cout << "\nYou have entered 0!\n";
    }
}