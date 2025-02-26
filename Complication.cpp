//Author: Sarah Manzanares
//Date 09-03/23
//Module 3 Lab 1
//C++ code that returns a complication table

#include <iostream>
using namespace std;

int main()
{
    int Num;

    cout << "Enter a positive number: ";
    cin >> Num;

    for (int i = 1; i <= Num; ++i)
    {
        cout << Num << " * " << i << " = " << Num * 1 << endl;
    }
}