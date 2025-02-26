#include <iostream>
#include <iomanip>
using namespace std;

double FindAverage(int[]);
void Display(string, int[]);
const int Array_Size = 5;

int main()
{
    int Grades[Array_Size];

    string Name;

    cout << "Enter the name: ";
    cin >> Name;
    for (int l = 0; l < Array_Size; l++)
    {
        cout << "Please enter the grade: ";
        cin >> Grades[l];
    }

    Display(Name, Grades);
}
double FindAverage(int pArray[])
{
    int sum = 0;
    double Average = 0.0;
    for (int i = 0; i < Array_Size; i++)
    {
        sum += pArray[i];
    }
    Average = static_cast<double>(sum) / Array_Size;
    return Average;
}
void Display(string pName, int pGrades[])
{
    for (int i = 0; i < Array_Size; i++)
    {
        cout << "This is grade " << i + 1 << ": " << pGrades[i] << endl;
    }
    cout << showpoint << fixed << setprecision(2);
    cout << "This is the Grade average: " << FindAverage(pGrades) << endl;
}