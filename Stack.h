#pragma once
#ifndef Stack_h
#include <string>
#define Stack_h
//#define max 1000
class Stack {
    int top;
public:
    int arr[100000];
    Stack();
    void push(char x);
    char pop();
    char peek();
    bool isEmpty();
    void reverse(std::string& message);
};


#endif 