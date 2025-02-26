//Calculator.h
//Author: Sarah Manzanares
//Date 09/17/23
//Module 6 Lab 2
//C++ code simulates a calculator by giving two numbers from the user
#ifndef Calculator_h
#define Calculator_h
#endif /* Calculator_h */
#include <string>
using namespace std;

class Calculator
{
public:
    void add();
    void subtract();
    void multiply();
    void divide();
    void setInfo(double first_number, double second_number);
    void setFirstNumber(double first_number);
    void setSecondNumber(double second_number);

    double getFirstNumber();
    double getSecondNumber();

    Calculator();
    Calculator(double first_number, double second_number);


private:
    //class attributes / properties 
    double first_number;
    double second_number;


};