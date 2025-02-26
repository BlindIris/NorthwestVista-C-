#include <iostream>

using namespace std;
int LinearSearch(int* numbers, int numberSize, int key);
int BinarySearch(int* numbers, int numbersSize, int key);

int main()
{
    int numbers[] = { 2, 4, 7, 10, 11, 32, 45, 87 };
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
    int key = 0;

    cout << "Enter an integer value: ";

    cin >> key;

    int keyLinear = LinearSearch(numbers, numbersSize, key);

    if (keyLinear == -1)
    {
        cout << key << " was not found." << endl;
    }
    else
    {
        cout << "Linear Search found " << key << " at index ";
        cout << keyLinear << "." << endl;
    }

    int keyBinary = BinarySearch(numbers, numbersSize, key);

    if (keyBinary == -1)
    {
        cout << key << " was not found." << endl;
    }
    else
    {
        cout << "Found " << key << " at index ";
        cout << keyBinary << "." << endl;
    }
    return 0;
}

int LinearSearch(int* numbers, int numbersSize, int key)
{
    int LinearCount = 0;
    for (int i = 0; i < numbersSize; i++)
    {
        if (numbers[i] == key)
        {
            cout << "Linear Search looked at " << LinearCount << " indexes" << endl;
            return i;
        }
        LinearCount++;
    }
    return -1;
}

int BinarySearch(int* numbers, int numbersSize, int key)
{
    int low = 0;
    int high = numbersSize - 1;
    int BinaryCount = 0;

    while (high >= low)
    {
        int mid = (high + low) / 2;

        if (numbers[mid] < key)
        {
            low = mid + 1;
        }
        else if (numbers[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            cout << "Binary Search looked at " << BinaryCount << " indexes" << endl;
            return mid;
        }
        BinaryCount++;
    }
    return -1;
}