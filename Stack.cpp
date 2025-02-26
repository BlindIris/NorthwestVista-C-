#include "Stack.h"
#include <iostream>
#include <string>
Stack::Stack()
{
	top = -1;
}
void Stack::push(char letter)
{
	if (top >= 100000 - 1)
	{
		std::cout << "Stack is full";
	}
	top++;
	arr[top] = letter;
}
bool Stack::isEmpty()
{
	return(top < 0);
}
char Stack::pop()
{
	if (top >= 100000 - 1)
	{
		std::cout << "Stack is empty";
	}
	char letter = arr[top];
	top--;
	return letter;
}
char Stack::peek()
{
	if (top >= 100000 - 1)
	{
		std::cout << "Stack is empty";
	}
	return arr[top];
}
void Stack::reverse(std::string& message)
{
	for (int i = 0; i < message.length(); i++)
	{
		push(message[i]);
	}
	for (int i = 0; i < message.length(); i++)
	{
		message[i] = pop();
	}
	std::cout << message;
}