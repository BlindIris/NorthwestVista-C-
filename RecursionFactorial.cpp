#include <iostream>
using namespace std;

/* TODO: Write recursive DigitCount(int number) function here. */
int factorial(int n);
int fibonacci(int n);
int sumOfDigits(int n);

int main()
{
	int n;
	cin >> n;

	int fact = factorial(n);
	int fib = fibonacci(n);
	int sum = sumOfDigits(n);

	cout << "This is the factorial of " << n << ": " << fact << endl;
	cout << "This is the fibonacci of " << n << ": " << fib << endl;
	cout << "This is the sum of digits of " << n << ": " << sum << endl;
	return 0;
}
int factorial(int n)
{
	if (n > 1)
	{
		return n * factorial(n - 1);
	}
	else
	{
		return 1;
	}
}
int fibonacci(int n)
{
	if (n <= 1)
	{
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int sumOfDigits(int n)
{
	if (n == 0)
	{
		return n;
	}
	return (n % 10 + sumOfDigits(n / 10));
}