/***************************************
  main.cpp
  Week 5
  Created by Sarah Manzanares on 10/13/22
****************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int FirstNum;
    int SecondNum;
    int evenSum;
    int oddSum;


    cout << "Input Lower Number: ";
    cin >> FirstNum;

    cout << "Input Uper Number: ";
    cin >> SecondNum;

    for (int counter = FirstNum; counter <= SecondNum; counter++)
    {
        if (counter % 2 != 0)
        {
            cout << "Odd: " << counter << endl;
            oddSum += counter;
        }
        else
        {
            cout << "Even: " << counter << endl;
            evenSum += counter;
        }
    }
    cout << "Total Even: " << evenSum << endl;
    cout << "Total Odd : " << oddSum << endl;
}