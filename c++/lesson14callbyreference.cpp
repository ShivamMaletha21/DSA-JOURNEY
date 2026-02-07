#include <iostream>
using namespace std;

main()
{
    int x = 100;
    int &r = x;

    cout << "original value: " << x << endl;
    cout << "reference value: " << r << endl;

    // updation in refence
    r = r + 670;
    cout << "updating value in refence: " << r << endl;

    cout << "value of x if changed: " << x << endl;
}