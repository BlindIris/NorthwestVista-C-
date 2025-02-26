#include "Stack.h"
#include <iostream>
#include <stdexcept>
using namespace std;
Stack::Stack(int cap)
{
	capacity = cap;
	arr = new int[cap];
	top = -1;
}
Stack::~Stack()
{
	delete[] arr;
}
void Stack::push(int val)
{
	if (top == capacity - 1)
	{
		throw overflow_error("Stack is full");
	}
	top++;
	arr[top] = val;
}
bool Stack::isEmpty()
{
	return(top == -1);
}
int Stack::pop()
{
	if (isEmpty())
	{
		throw out_of_range("Stack is empty");
	}
	int value = arr[top];
	top--;
	return value;
}
bool Stack::isFull()
{
	return(top == capacity - 1);
}
int Stack::size()
{
	return (top + 1);
}
int Stack::peek()
{
	if (isEmpty())
	{
		throw out_of_range("Stack is empty");
	}
	return arr[top];
}
void Stack::printList()
{
	for (int i = top; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}