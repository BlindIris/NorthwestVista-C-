#include <queue>
#include <iostream>
#include <String>

using namespace std;

int main()
{
	string personName;
	int youPosition = 0;

	queue<string> peopleInQueue;

	getline(cin, personName);

	while (personName != "-1")
	{
		peopleInQueue.push(personName);
		if (personName == "You")
		{
			youPosition = peopleInQueue.size();
		}
		getline(cin, personName);
	}

	cout << "Welcome to the ticketing service..." << endl;
	cout << "You are number " << youPosition << " in the queue." << endl;
	while (!peopleInQueue.empty())
	{
		personName = peopleInQueue.front();
		peopleInQueue.pop();
		if (personName == "You")
		{
			cout << "You are now " << youPosition << endl;
			cout << "You can now purchase your ticket!" << endl;
		}
		else
		{
			cout << personName << "has purchased a ticket. " << endl;
			--youPosition;
			if (youPosition == 0)
			{
				cout << "No more people in the queue" << endl;
			}
			else
			{
				cout << "You are in position " << youPosition << endl;
			}
		}

	}

	return 0;

}