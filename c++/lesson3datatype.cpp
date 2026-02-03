#include <iostream>
using namespace std;
main()
{
    int a = 20;
    char b = 'A';
    string c = "Raj";
    float d = 45.7;

    cout << a << endl
         << b << endl
         << c << endl
         << d;

    // to check size we use..sizeof();

    cout << sizeof(int) << "bytes" << endl;
    cout << sizeof(char) << "bytes" << endl;
    cout << sizeof(string) << "bytes" << endl;
    cout << sizeof(float) << "bytes" << endl;
}