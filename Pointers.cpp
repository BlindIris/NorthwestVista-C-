//Author: Sarah Manzanares
//Date 09/24/23
//Module 2 Lab 1
//C++ code that demenstrates pointers

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declare an integer variable myNumber and assign a value of 5
    int myNumber = 5;
    // declare a pointer variable myPointer of type integer
    int* myPointer;
    // assign the memory address of myNumber to the pointer variable myPointer
    myPointer = &myNumber;
    // print the value of myNumber
    cout << "My Number value: " << myNumber << endl;
    // print the memory address of myNumber
    cout << "Address of my Number Value: " << &myNumber << endl;
    // print the value of the pointer variable myPointer
    cout << "My Pointer Value: " << myPointer << endl;
    // print the value pointed to by myPointer (which is the value of myNumber)
    cout << "Value of the address pointed by myPointer: " << *myPointer << endl;
    return 0;

}