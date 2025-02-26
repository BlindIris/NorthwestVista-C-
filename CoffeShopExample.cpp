//Module 6 - Lab 5
//COSC 1336
//Rochel Garcia-Barajas
//Isaiah Addams 
//Jaydon Dirig
//Sarah Manzanarez

//THREE SIZES: 
//Small (9oz) - $1.75
//Medium (12oz) - $1.90
//Large (15oz) - $2.00

//PROGRAM NEEEDS TO :
//- Buy coffee in any size and in any number of cups.
//- At any time show the total number of cups of each size sold.
//- At any time show the total amount of coffee sold.
//- At any time show the total money made.

#include <iostream>
using namespace std;

//GLOBAL FUNCTIONS
double const SMALL_PRICE = 1.75;
double const MEDIUM_PRICE = 1.90;
double const LARGE_PRICE = 2.00;
int smallCoffee = 0;
int mediumCoffee = 0;
int largeCoffee = 0;

//Prototype the functions >:)
void printLine();
void printHeader();
void howToUseProgram(int& smallCoffee, int& mediumCoffee, int& largeCofee, char userInput); //ROCHEL
void sellCoffee(int& smallCoffee, int& mediumCoffee, int& largeCofee, char itemInput); //SARAH
void coffeeShopMenu(); //ROCHEL
int cupsEachSizeSold(int& smallCoffee, int& mediumCoffee, int& largeCofee); //JAYDON
int totalCoffeeSold(int& smallCoffee, int& mediumCoffee, int& largeCofee); //ISAIAH
double totalMoneyMade(int& smallCoffee, int& mediumCoffee, int& largeCofee);

int main()
{
	printHeader();

	coffeeShopMenu();
}

//D E F I N E  T H E  F U N C T I O N S
void printLine()
{
	cout << "*****************************************\n";
}

//this one prints our cute lil header
void printHeader()
{
	printLine();
	cout << "*           Sam's Coffee Shop           *\n";
	printLine();

}//END OF 'printHeader'

//Function that shows user how to use the program
void howToUseProgram(int& smallCoffee, int& mediumCoffee, int& largeCofee, char userInput)
{
	cout << "\nWhat would you like to do today?";
	cout << "\n[1] Buy Coffee";
	cout << "\n[2] Display the cups of coffee of each size sold";
	cout << "\n[3] Display the total cups of coffee sold";
	cout << "\n[4] Display the total amount of money earned";

	cout << "\nPlease enter your selection : ";
	cin >> userInput;

	switch (userInput)
	{
	case 1:
		sellCoffee(smallCoffee, mediumCoffee, largeCoffee);
		break;
	case 2:
		cupsEachSizeSold(smallCoffee, mediumCoffee, largeCoffee);
		break;
	case 3:
		totalCoffeeSold(smallCoffee, mediumCoffee, largeCoffee);
		break;
	case 4:
		totalMoneyMade(smallCoffee, mediumCoffee, largeCoffee);
		break;
	default:
		cout << "Invalid number selection. Please select a number between 1 and 4." << endl;
	}



}//END OF 'howToUseProgram'

//Function that sells coffee
void sellCoffee(int& smallCoffee, int& mediumCoffee, int& largeCofee, char itemInput)
{
	coffeeShopMenu();

	bool again = true;

	do
	{
		cout << "\nPlease enter your selection : ";
		cin >> itemInput;

		switch (itemInput)
		{
		case 1:
			cout << "\nHow many small coffee's would you like? : ";
			cin >> smallCoffee;
		case 2:
			cout << "\nHow many medium coffee's would you like? : ";
			cin >> mediumCoffee;
		case 3:
			cout << "\nHow many large coffee's would you like? : ";
			cin >> largeCoffee;
		case 4:
			cout << "Thank you for using our program!";
		default:
			cout << "Wrong input. Exiting...";
		}//SWITCH
	} while (again);

}//END OF 'sellCoffee'


//Function that displays menu
void coffeeShopMenu()
{
	cout << "\n................Sam's Coffee Shop Menu................" << endl;
	cout << "\n\t[1] Small Coffee (9oz).............$1.75";
	cout << "\n\t[2] Medium Coffee (12oz)...........$1.90";
	cout << "\n\t[3] Large Coffee (9oz).............$2.00";
	cout << "\n\t[4] Finish purchase...............(Exit)";

}//END OF 'coffeeShopMenu'

//Function that shows number of cups each size sold

void cupsEachSizeSold(int& smallCoffee, int& mediumCoffee, int& largeCofee)
{
	cout << "Coffee Sold Today - Small Cups: " << smallCoffee << endl;
	cout << "Coffee Sold Today - Medium Cups: " << mediumCoffee << endl;
	cout << "Coffee Sold Today - Large Cups: " << largeCoffee << endl;
}//END OF 'cupsEachSizeSold'


//Function that shows total amount of coffee sold
int totalCoffeeSold(int& smallCoffee, int& mediumCoffee, int& largeCofee)
{
	int myReturn = 0;

	myReturn = smallCoffee + mediumCoffee + largeCofee;

	return myReturn;

}//END OF 'totalCoffeeSold'


//Function that shows total money made
//(profit on all sales is 25%)
double totalMoneyMade(int& smallCoffee, int& mediumCoffee, int& largeCofee)
{
	double myReturn = 0;

	myReturn = (SMALL_PRICE * smallCoffee) + (MEDIUM_PRICE * mediumCoffee) + (LARGE_PRICE * largeCoffee) * .25;

	return myReturn;
}//END OF 'totalMoneyMade'