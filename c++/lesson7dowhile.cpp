#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "enter a name: ";
    cin >> name;

    do
    {
        cout << name;
        break;
    } while (name != "Ankush");
}