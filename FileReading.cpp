/***************************************
  main.cpp
  Week 3
  Created by Sarah Manzanares on 9/13/22
****************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string MyName;
    string Street;
    string CityStateZip;

    cout << "Hello! We need you to put in your Name and Address, please.\n";
    cout << "Your Name: ";
    getline(cin, MyName);
    cout << "Your Address: ";
    getline(cin, Street);
    cout << "Your City, State, and Zip code: ";
    getline(cin, CityStateZip);

    ofstream NewFile("MailLabel.txt");
    NewFile << endl << MyName << endl << Street << endl << CityStateZip << endl;
    NewFile.close();
    string Text;
    ifstream ReadFile("MailLabel.txt");

    while (getline(ReadFile, Text))
    {
        cout << Text << endl;
    }
    ReadFile.close();
}