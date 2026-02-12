#include <iostream>
using namespace std;
class A
{
public:    // optional
    int a; // it is private by default or you  can also write private : then int a;
    A()    // it is a constructor .. contain same name as of class name .. use to initialize data we does not use cout here bcz constructor is use to initialize data... if we dont use it ... compiler assign constructor byitself and fit a garbage value in int a;
    {
        a = 100;
    }
    void show() // member function... use to perform action
    {
        cout << a;
    }
};

int main()
{

    A obj = A();
    obj.show();
    return 0;
}