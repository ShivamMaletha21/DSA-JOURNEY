#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A() // Constructor
    {
        a = 400;
        cout << a;
    }
};
int main()
{
    A obj; // create objct from A class
}
