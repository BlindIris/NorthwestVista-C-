/***************************************
  main.cpp
  Week 3
  Created by Sarah Manzanares on 9/13/22
****************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string MyName;
	string Street;
	string City;
	string State;
	string ZipCode;

	cout << "Hello! We need you to put in your Name and Address, please.\n";
	cout << "Your Name: ";
	getline(cin, MyName);

	cout << "Your Address: ";
	getline(cin, Street);

	cout << "Your City: ";
	getline(cin, City);

	cout << "Your State: ";
	getline(cin, State);

	cout << "And lastly your Zip Code: ";
	getline(cin, ZipCode);

	cout << "\nYou have entered: \n";
	cout << MyName << endl;
	cout << Street << endl;
	cout << City << "," << State << "," << ZipCode << endl;

}