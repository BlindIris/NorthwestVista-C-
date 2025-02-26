//Author: Sarah Manzanares
//Date: it was sometime in Fall 2022
//Modified: 09/09/23
//Module 5 Lab 1
//C++ code that is a calculator using 4 calculative functions.
#include <iomanip>
#include <iostream>

using namespace std;

//these are all my functions for this code - all of them are doubles
double addingFunction(double, double);
double SubtractFunction(double, double);
double MultiplyFunction(double, double);
double DivideFunction(double, double);
int main()
{
    //All my Variables used in the program
    char Again = 'Y';
    int menu = 0;
    double FirstNum;
    double SecNum;

    //My welcome header
    cout << "Welcome to the Programming 3 Calculator - Updated!!!!!!" << endl;

    //My While loop in order to have the menu show up until user says no
    while (Again == 'Y')
    {
        //This is my menu and my user input to decide
        cout << "1) Add Two Doubles" << endl;
        cout << "2) Subtract Two Doubles" << endl;
        cout << "3) Multiply Two Doubles" << endl;
        cout << "4) Divide Two Doubles" << endl;
        cout << "0) Exit the Program" << endl;
        cin >> menu;

        //This is my menu, I used a switch in order to have the user input be simple integers instead of characters
        switch (menu)
        {
            //First Case for addition
        case 1:
            cout << "Please enter your first number: ";
            cin >> FirstNum;
            cout << "PLease enter your second number: ";
            cin >> SecNum;
            cout << FirstNum << " + " << SecNum << " = " << addingFunction(FirstNum, SecNum) << endl;
            break;

            //Second Case for Subtracting
        case 2:
            cout << "Please enter your first number: ";
            cin >> FirstNum;
            cout << "PLease enter your second number: ";
            cin >> SecNum;
            cout << FirstNum << " - " << SecNum << " = " << SubtractFunction(FirstNum, SecNum) << endl;
            break;

            //Third Case for Multiplication
        case 3:
            cout << "Please enter your first number: ";
            cin >> FirstNum;
            cout << "PLease enter your second number: ";
            cin >> SecNum;
            cout << FirstNum << " * " << SecNum << " = " << MultiplyFunction(FirstNum, SecNum) << endl;
            break;

            //Fourth Case for Division
        case 4:
            cout << "Please enter your first number: ";
            cin >> FirstNum;
            cout << "PLease enter your second number: ";
            cin >> SecNum;
            cout << FirstNum << " / " << SecNum << " = " << DivideFunction(FirstNum, SecNum) << endl;
            break;

            //Last Case to exit the program so it won't be a forever loop
        case 0:
            cout << "You have chosen to exit the program. Thank you!" << endl;
            break;
        }

        //Asking if you want to continue more tries, this is added to not make the while loop forever
        cout << "Do you want run the program again? (Y/N) ";
        cin >> Again;
    }
}
//These are all my functions defined for each situation
double addingFunction(double pOne, double pTwo)
{
    return pOne + pTwo;
}
double SubtractFunction(double pOne, double pTwo)
{
    return pOne - pTwo;
}
double MultiplyFunction(double pOne, double pTwo)
{
    return pOne * pTwo;
}
double DivideFunction(double pOne, double pTwo)
{
    return pOne / pTwo;
}