/***************************************
  main.cpp
  Week 3
  Created by Sarah Manzanares on 9/17/22
****************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string Month;
	double Electric;
	double Rent;
	double Water;
	double Total;

	cout << "Hello! In order to calculate your total expense,\nWe need some numbers! \n";
	cout << "\nWhat is the Month: ";
	getline(cin, Month);
	cout << "How much is this month's Electric Payment: $";
	cin >> Electric;
	cout << "How much is this month's Rent: $";
	cin >> Rent;
	cout << "How much is this month's Water Bill: $";
	cin >> Water;

	Total = Electric + Rent + Water;

	cout << "~~This is all you have entered~~\n";
	cout << fixed << showpoint << setprecision(2);
	cout << left << setw(20) << "This Month: " << right << setw(9) << Month << endl;
	cout << left << setw(20) << "Electric Bill: " << setw(5) << right << "$" << Electric << endl;
	cout << left << setw(20) << "Rent Bill: " << right << setw(5) << "$" << Rent << endl;
	cout << left << setw(20) << "Water Bill: " << right << setw(5) << "$" << Water << endl;
	cout << left << setw(20) << "This is your total: " << right << setw(5) << "$" << Total << endl;

}