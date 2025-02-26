/***************************************
  main.cpp
  Week 2
  Created by Sarah Manzanares on 8/30/22
****************************************/

#include <iostream>
using namespace std;
int main()
{
    int TestOne = 69;
    int TestTwo = 95;
    int TestThree = 86;
    int NumTest = 3;
    double average = 0.0;

    average = (TestOne + TestTwo + TestThree) / NumTest;

    std::cout << "Grade Average For The Year: " << average << "\n";

}