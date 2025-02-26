#include <iostream>
using namespace std;

double AddBalance(double, double);
void Header();

int main()
{
    double CurrentBalance;
    double Deposit;
    char Again;

    Header();

    cout << "Do you want to deposit today? (Y/N) ";
    cin >> Again;

    while (Again == 'Y' || Again == 'y')
    {
        cout << "Please enter your current balance: $";
        cin >> CurrentBalance;

        cout << "Please enter th amount you want to deposit: $";
        cin >> Deposit;

        cout << "Here is your new balance: $" << AddBalance(CurrentBalance, Deposit) << endl;

        cout << "Do you have more to deposit? (Y/N) ";
        cin >> Again;
    }

}

void Header()
{
    cout << "**********************************************" << endl;
    cout << "               Alamo Bank" << endl;
    cout << "**********************************************" << endl;

}
double AddBalance(double CurrentBalance, double Deposit)
{
    double NewBalance;
    NewBalance = CurrentBalance + Deposit;
    return NewBalance;
}