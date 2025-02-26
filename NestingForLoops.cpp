/***************************************
  main.cpp
  Week 5
  Created by Sarah Manzanares on 10/20/22
****************************************/

#include <iostream>

using namespace std;

int main()
{
    int NumberOne;
    int NumberTwo;
    string Symbol;

    cout << "How many columns do you want? ";
    cin >> NumberOne;

    cout << "How many rows do you want? ";
    cin >> NumberTwo;

    cout << "What is the symbol you want to use? ";
    cin >> Symbol;

    for (int Row = 1; Row <= NumberTwo; Row++)
    {
        for (int Col = 1; Col <= NumberOne; Col++)
        {
            cout << Symbol;
        }
        cout << "\n";
    }
}