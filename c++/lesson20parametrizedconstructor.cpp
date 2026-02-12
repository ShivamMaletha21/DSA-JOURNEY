#include <iostream>
using namespace std;

class A
{
private:
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " " << b;
    }
};

int main()
{
    A obj(10, 40);
    obj.show();
    return 0;
}