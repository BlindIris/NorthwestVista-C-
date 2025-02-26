//Author: Sarah Manzanares
//Date 09-03/23
//Module 1 Lab 1
//C++ code that calculates expenxes on a bills

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string NameMonth;
    string filename;
    double Electric;
    double Rent;
    double Water;
    double TotalMonth;

    cout << "Please enter the Months name: ";
    cin >> NameMonth;

    cout << "PLease enter the amount for Electricity: ";
    cin >> Electric;

    cout << "Please enter the amount for Rent: ";
    cin >> Rent;

    cout << "Please enter the amount for Water: ";
    cin >> Water;

    TotalMonth = Water + Electric + Rent;

    filename = NameMonth + ".txt";

    ofstream MyFile(filename);
    MyFile << "Your monthly expenses for " << NameMonth <<
        "\n Rent:                 $" << Rent <<
        "\n Electric:             $" << Electric <<
        "\n Water:                $" << Water <<
        "\n---------------------------------" <<
        "\n Total:                $" << TotalMonth;
    MyFile.close();

    string MyText;

    ifstream MyReadFile("NameMonth.txt");

    while (getline(MyReadFile, MyText))
    {
        cout << MyText << endl;
    }
    MyReadFile.close();


}