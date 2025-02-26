#include <iomanip>
#include <iostream>

using namespace std;

int addingFunction(int, int, int);
int addingFunction(int, int);
double addingFunction(double, double, double);
double addingFunction(double, double);
int main()
{
    char Again = 'Y';
    int menu = 0;

    cout << "Welcome to the Programming 1 Calculator" << endl;

    while (Again == 'Y')
    {
        cout << "1) Add Two Integers" << endl;
        cout << "2) Add Three Integers" << endl;
        cout << "3) Add Two Doubles" << endl;
        cout << "4) Add Three Doubles" << endl;
        cout << "0) Exit the Program" << endl;
        cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "You have chosen to add two integers: " << addingFunction(5, 6) << endl;
            break;
        case 2:
            cout << "You have chosen to add three integers: " << addingFunction(5, 6, 57) << endl;
            break;
        case 3:
            cout << "You have chosen to add two doubles: " << addingFunction(6.34, 8.45) << endl;
            break;
        case 4:
            cout << "You have chosen to add three doubles: " << addingFunction(6.23, 6.67, 57.23) << endl;
            break;
        case 0:
            cout << "You have chosen to exit the program. Thank you!" << endl;
            break;
        }
        cout << "Do you want run the program again? (Y/N) ";
        cin >> Again;
    }
}
int addingFunction(int pOne, int pTwo)
{
    return pOne + pTwo;
}
int addingFunction(int pOne, int pTwo, int pThree)
{
    return pOne + pTwo + pThree;
}
double addingFunction(double pOne, double pTwo)
{
    return pOne + pTwo;
}
double addingFunction(double pOne, double pTwo, double pThree)
{
    return pOne + pTwo + pThree;
}