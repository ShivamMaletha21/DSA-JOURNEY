#include <iostream>
using namespace std;

class a
{
    int n;

public:
    a()
    {
        n = 10;
        cout << n << endl;
    }

    ~a()
    {

        cout << "destroyed object" << endl;
        cout << n << endl;
    }
};

int main()
{
    a ob, ob1;
}