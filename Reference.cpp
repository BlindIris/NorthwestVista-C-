//Author: Sarah Manzanares
//Date: it was sometime in Fall 2022
//Modified: 09/10/23
//Module 5 Lab 2
//C++ code that shows call by reference and call by value
#include <iostream>

using namespace std;

//These are all my function in order to show call by refrence and value, both are void bc they are not returning a number
void swapNumber(int&, int&);
void addYtoX(int, int);

int main()
{
    //These are all my variables I used in the program, all with prepopulated numbers
    int FirstNumber = 10;
    int SecondNumber = 5;
    int ThirdNumber = 15;
    int FourthNumber = 3;

    //This is showing the numbers before anything is done to them
    cout << "Call by Reference - " << endl;
    cout << "\t First Number: " << FirstNumber << endl;
    cout << "\t Second Number: " << SecondNumber << endl << endl;

    //This then calls the by reference function to swap the numbers
    swapNumber(FirstNumber, SecondNumber);

    //This then outputs the numbers that have been swapped
    cout << "\t First Number: " << FirstNumber << endl;
    cout << "\t Second Number: " << SecondNumber << endl;

    //This is showing the numbers before anything is done to them
    cout << "Call by Value -  " << endl;
    cout << "\t First Number: " << ThirdNumber << endl;
    cout << "\t Second Number: " << FourthNumber << endl << endl;

    //This then calls the by value function to add the numbers together
    addYtoX(ThirdNumber, FourthNumber);

    //This then outputs the numbers values
    cout << "\t First Number: " << ThirdNumber << endl;
    cout << "\t Second Number: " << FourthNumber << endl;

}

//This is a function that swaps the first number value with the second number 
void swapNumber(int& pFirstNumber, int& pSecondNumber)
{
    //create a local variable as a holding location for swapping the values
    int Swap;
    Swap = pFirstNumber;
    pFirstNumber = pSecondNumber;
    pSecondNumber = Swap;

}

//This is a function that add the value of the ThirdNumber and the FourthNumber to change the value of the ThirdNumber 
void addYtoX(int pThirdNumber, int pFourthNumber)
{
    pThirdNumber = pThirdNumber + pFourthNumber;

    cout << "Call by Value(inside) - " << pThirdNumber;
}
