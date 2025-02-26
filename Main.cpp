#include <iostream>
#include "Stack.h"


int main()
{
	std::string message;
	std::cout << "Please enter a message and I will reverse it: ";
	getline(std::cin, message);
	Stack stack;
	std::cout << "This is the message reversed: ";
	stack.reverse(message);
}