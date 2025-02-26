#include <iostream>
using namespace std;

/* TODO: Write recursive DigitCount(int number) function here. */
int DigitCount(int);

int main()
{
	int num;
	int digits;

	cin >> num;
	digits = DigitCount(num);

	//you will need to modify the output to display the correct output as shown above
	cout << "Number of digits: " << DigitCount(num) << endl;
	return 0;
}
int DigitCount(int num)
{
	if (num == 0)
	{
		return 1;
	}
	int count = 0;
	while (num != 0)
	{
		num = num / 10;
		++count;
	}
	return count;
}