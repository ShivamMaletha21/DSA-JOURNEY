#include <iostream>
#include <string> // using bcz.. gets and puts are inside this

using namespace std;

int main()
{

    // declaring string using char.. this is one way of creating it
    char myName[20]; // it's size is fixed
    cout << "Enter your full name: ";

    cin.getline(myName, 20);

    cout << myName;

    // another way of creating a string .. using string object

    string myAddress; // it is dynamic .. can inc and dec acc. to value
    cout << "Enter Your Full Address: ";
    getline(cin, myAddress); // for string object we use getline(cin, variable)

    cout << "Full Address: " << myAddress;
    return 0;
}