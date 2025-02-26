#pragma once
#ifndef DoubleLinkedList_h
#define DoubleLinkedList_h
#include <iostream>
using namespace std;

// Define the DNode struct
struct DNode
{
    int value; // Value of the node
    DNode* prev; // Pointer to the previous node
    DNode* next; // Pointer to the next node
};

class DoubleLinkedList
{
private:
    DNode* head; // Pointer to the head of the list
    DNode* tail; // Pointer to the tail of the list

public:
    DoubleLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }// Constructor
    ~DoubleLinkedList()
    {
        while (head)
        {
            DNode* NodeToDelete = head;
            head = head->next;
            delete NodeToDelete;
        }
    }// Destructor
    void addFront(int val)
    {
        DNode* NewNode = new DNode;
        NewNode->value = val;
        NewNode->prev = nullptr;
        NewNode->next = head;
        if (head != nullptr)
        {
            head->prev = NewNode;
            NewNode->next = head;
            head = NewNode;
        }
        else
        {
            head = NewNode;
            tail = NewNode;
        }
    }// Method to add node at the front
    void addBack(int val)
    {
        DNode* NewNode = new DNode;
        NewNode->value = val;
        NewNode->next = nullptr;
        NewNode->prev = tail;

        if (tail != nullptr)
        {
            tail->next = NewNode;
            NewNode->prev = tail;
            tail = NewNode;
        }
        else
        {
            tail = NewNode;
            head = NewNode;
        }
    } // Method to add node at the back
    void removeFront()
    {
        if (head != nullptr)
        {
            DNode* NodeToDelete = head;
            head = head->next;
            if (head)
            {
                head->prev = nullptr;
            }
            else
            {
                tail = nullptr;
            }
            delete NodeToDelete;
        }
    }// Method to remove node from the front
    void removeBack()
    {
        if (tail != nullptr)
        {
            DNode* NodeToDelete = tail;
            tail = tail->prev;
            if (tail)
            {
                tail->next = nullptr;
            }
            else
            {
                head = nullptr;
            }
            delete NodeToDelete;
        }
    }// Method to remove node from the back
    bool isEmpty()
    {
        if (head == nullptr)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // Method to check if list is empty
    int size()
    {
        int size = 0;
        DNode* Traversal = head;
        while (Traversal != nullptr)
        {
            size++;
            Traversal = Traversal->next;
        }
        return size;
    }// Method to get size of the list
    void printList()
    {
        DNode* Traversal = head;
        while (Traversal != nullptr)
        {
            cout << Traversal->value << " ";
            Traversal = Traversal->next;
        }
        cout << endl;
    }// Method to print the list
    void printListReverse()
    {
        DNode* Traversal = tail;
        while (Traversal != nullptr)
        {
            cout << Traversal->value << " ";
            Traversal = Traversal->prev;
        }
        cout << endl;
    }// Method to print the list in reverse order*/
};
#endif //DoubleLinkedList_h