#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter a number: ";
    cin >> a >> b;

    try
    {

        if (b == 0)
            throw "this is error";

        cout << a / b;
    }

    catch (const char *msg)
    {
        cout << "Error happened: " << msg;
    }
}