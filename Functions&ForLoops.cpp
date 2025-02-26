
#include <iostream>

using namespace std;

int SumOfOdd(int FirstNum, int SecondNum);
int SumOfEven(int FistNum, int SecondNum);
int NumberOfOdd(int FirstNum, int SecondNum);
int NumberOfEven(int FirstNum, int SecondNum);

int main()
{
    int FirstNum;
    int SecondNum;

    cout << "****Please enter numbers in between 100 and 200****" << endl;
    cout << "Input the lower number: ";
    cin >> FirstNum;

    cout << "Input the upper Number: ";
    cin >> SecondNum;

    if ((FirstNum > 100) || (SecondNum < 200))
    {
        cout << "Total Sum Of all the Even: " << SumOfEven(FirstNum, SecondNum) << endl;
        cout << "Total Sum of all the Odd: " << SumOfOdd(FirstNum, SecondNum) << endl;
        cout << "Total Number of all the Odd: " << NumberOfOdd(FirstNum, SecondNum) << endl;
        cout << "Total Number of all the Even: " << NumberOfEven(FirstNum, SecondNum) << endl;
    }
    else
    {
        cout << "Wrong number in range";
    }
}

int NumberOfOdd(int pFirstNum, int pSecondNum)
{
    int count = 0;
    for (int counter = pFirstNum; counter <= pSecondNum; counter++)
    {
        if (counter % 2 != 0)
        {
            count++;
        }
        return count;
    }
}

int NumberOfEven(int pFirstNum, int pSecondNum)
{
    int count = 0;
    for (int counter = pFirstNum; counter <= pSecondNum; counter++)
    {
        if (counter % 2 == 0)
        {
            count++;
        }
        return count;
    }
}

int SumOfEven(int pFirstNum, int pSecondNum)
{
    int evenSum = 0;
    for (int counter = pFirstNum; counter <= pSecondNum; counter++)
    {
        if (counter % 2 == 0)
        {
            evenSum += counter;
        }
    }
    return evenSum;
}
int SumOfOdd(int pFirstNum, int pSecondNum)
{
    int OddSum = 0;
    for (int counter = pFirstNum; counter <= pSecondNum; counter++)
    {
        if (counter % 2 != 0)
        {
            OddSum += counter;
        }
    }
    return OddSum;
}