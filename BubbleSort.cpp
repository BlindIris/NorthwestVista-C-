#include <iostream>
#include <vector>
#include <thread>

using namespace std;
void bubbleSort(vector<int>& arr);
void selectionSort(vector<int>& arr);
void printVector(vector<int>& arr);

int main()
{
    vector<int> arr = { 3,4,8,12,7,34 };

    bubbleSort(arr);
    cout << "Bubble Sort: ";
    printVector(arr);

    selectionSort(arr);
    cout << "\n\nSelection Sort: ";
    printVector(arr);
    return 0;
}

void bubbleSort(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        //compare elemet to the next element, and swap if condition is true
        for (int j = 0; j < arr.size() - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(vector<int>& arr)
{
    int comparisons = 0;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int vectSmallest = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            comparisons++;

            if (arr[j] < arr[vectSmallest])
            {
                vectSmallest = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[vectSmallest];
        arr[vectSmallest] = temp;
    }
}
void printVector(vector<int>& arr)
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}