#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    string inputName;
    int age = 0;
    // Set exception mask for cin stream
    cin.exceptions(ios::failbit);

    cin >> inputName;
    while (inputName != "-1")
    {
        // FIXME: The following line will throw an ios_base::failure.
        //        Insert a try/catch statement to catch the exception.
        //        Clear cin's failbit to put cin in a useable state.

        try
        {
            cin >> age;
            cout << inputName << " " << (age + 1) << endl;
        }
        catch (exception)
        {
            cout << inputName << " " << 0 << endl; // print inputName and 0
            cin.clear(); // clear cin
            cin.ignore(1000, '\n'); // ignore up to 1000 characters or to the end of the line
        }

        cin >> inputName;
    }

    return 0;
}