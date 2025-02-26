//Author: Sarah Manzanares
//Date 09-03/23
//Module 3 Lab 2
//C++ code that calculates Annual Salary and computes tax to pay

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int AnnualSalary;
    double TaxRate;
    double TaxWithheld;
    double TotalPay;

    cout << "Enter Your Annual Salary: ";
    cin >> AnnualSalary;

    while (AnnualSalary != 0)
    {
        if (AnnualSalary >= 80000)
        {
            TaxRate = .25;
        }
        else if ((AnnualSalary < 80000) && (AnnualSalary > 60000))
        {
            TaxRate = .2;
        }
        else if ((AnnualSalary < 60000) && (AnnualSalary > 40000))
        {
            TaxRate = .15;
        }
        else if ((AnnualSalary < 40000) && (AnnualSalary > 20000))
        {
            TaxRate = .1;
        }
        else//(AnnualSalary < 20000)
        {
            TaxRate = .05;
        }

        TaxWithheld = AnnualSalary * TaxRate;
        TotalPay = AnnualSalary - TaxWithheld;

        cout << "\nAnnual Salary:   $" << AnnualSalary;
        cout << "\nTax Rate:         " << (TaxRate * 100) << "%";
        cout << "\nTax Withheld:    $" << TaxWithheld;
        cout << "\nTotal Pay:       $" << TotalPay;

        cout << "\nEnter Your Annual Salary or 0 to exit: ";
        cin >> AnnualSalary;
    }
}