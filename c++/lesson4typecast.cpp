#include <iostream>
using namespace std;

main()
{
    int a = 10;
    double b = 3.43;

    // impicit typecasting
    double a2 = a;
    int b2 = b;

    cout << a2 << endl;
    cout << b2 << endl;

    // explicit

    double a3 = (double)a;
    int b3 = (int)a;

    cout << a3 << endl
         << b3 << endl;
}