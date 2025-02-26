//Author: Sarah Manzanares
//Date 09/24/23
//Module 7 Lab 2
//C++ code that creates a contact lists using linked lists and pointers
#include <iostream>
#include <string>
using namespace std;

class ContactNode
{
private:
    string contactName;
    string contactPhoneNumber;
    ContactNode* nextNodePtr;

public:
    ContactNode(string Name, string PhoneNumber)
    {
        contactName = Name;
        contactPhoneNumber = PhoneNumber;
        nextNodePtr = nullptr;
    }

    void PrintContactNode() const
    {
        cout << "Name: " << contactName << endl;
        cout << "Phone Number: " << contactPhoneNumber << endl;
    }
    string GetContactName() const { return contactName; }
    string GetContactPhoneNumber() const { return contactPhoneNumber; }

    void InsertAfter(ContactNode* nodeLoc)
    {
        ContactNode* tempPtr = nextNodePtr;
        nextNodePtr = nodeLoc;
        nodeLoc->nextNodePtr = tempPtr;
    }
    ContactNode* GetNext() const { return nextNodePtr; }
};

int main()
{
    string ContactName;
    string PhoneNumber;

    cout << "Please enter first contact name: ";
    getline(cin, ContactName);
    cout << "Please enter a Phone Number for " << ContactName << ": ";
    getline(cin, PhoneNumber);

    ContactNode* HeadNode = new ContactNode(ContactName, PhoneNumber);

    cout << "Please enter second contact name: ";
    getline(cin, ContactName);
    cout << "Please enter a Phone Number for " << ContactName << ": ";
    getline(cin, PhoneNumber);

    ContactNode* SecondNode = new ContactNode(ContactName, PhoneNumber);
    HeadNode->InsertAfter(SecondNode);

    cout << "Please enter third contact name: ";
    getline(cin, ContactName);
    cout << "Please enter a Phone Number for " << ContactName << ": ";
    getline(cin, PhoneNumber);

    ContactNode* ThirdNode = new ContactNode(ContactName, PhoneNumber);
    SecondNode->InsertAfter(ThirdNode);

    cout << "\nContact List:" << endl;

    ContactNode* current = HeadNode;
    while (current != nullptr)
    {
        current->PrintContactNode();
        cout << endl;
        current = current->GetNext();
    }

    delete HeadNode;
    delete SecondNode;
    delete ThirdNode;
    return 0;
}