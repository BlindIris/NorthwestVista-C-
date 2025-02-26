#include <iostream>

using namespace std;

void Header();

void DrawBox(int NumberOne, int NumberTwo, char Symbol);

void PrintShapeType(int NumberOne, int NumberTwo);

int main()
{

    Header();

    int NumberOne;
    int NumberTwo;
    char Symbol;

    cout << "How many columns do you want? ";
    cin >> NumberOne;

    cout << "How many rows do you want? ";
    cin >> NumberTwo;

    cout << "What is the symbol you want to use? ";
    cin >> Symbol;

    DrawBox(NumberOne, NumberTwo, Symbol);

    PrintShapeType(NumberOne, NumberTwo);
}

void Header()
{
    cout << "**********************************************" << endl;
    cout << "               Box Program" << endl;
    cout << "**********************************************" << endl;

}
void DrawBox(int pNumberTwo, int pNumberOne, char pSymbol)
{
    for (int Row = 1; Row <= pNumberTwo; Row++)
    {
        for (int Col = 1; Col <= pNumberOne; Col++)
        {
            cout << pSymbol;
        }
        cout << "\n";
    }
}
void PrintShapeType(int pNumberTwo, int pNumberOne)
{
    if (pNumberOne == pNumberTwo)
    {
        cout << "This is a square!" << endl;
    }
    else
    {
        cout << "This is a rectangle!" << endl;
    }
}