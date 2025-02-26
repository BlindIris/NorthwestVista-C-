#include <iostream>
#include <iomanip>
using namespace std;

const int Array_Size = 5;
void ReportCar(string[], double[]);

int main()
{
    string CarName[Array_Size] = { "Pneumatic Aerotrain", "Idicraft", "The Icon", "The Wyvern", "Chauchemobile" };
    double MPG[Array_Size] = { 36.7, 23.5, 67.5, 12.4, 46.3 };

    ReportCar(CarName, MPG);
}
void ReportCar(string pCarName[], double pMPG[])
{
    for (int i = 0; i < Array_Size; i++)
    {
        double TheBar = 30.0;
        if (pMPG[i] <= TheBar)
        {
            cout << "Car: " << pCarName[i] << endl;
            cout << "\tMPG: " << pMPG[i] << endl;
            cout << "\tIt is Economical!" << endl;
        }
        else
        {
            cout << "Car: " << pCarName[i] << endl;
            cout << "\tMPG: " << pMPG[i] << endl;
            cout << "\tIt is a Gas Guzzler!" << endl;
        }
    }
}