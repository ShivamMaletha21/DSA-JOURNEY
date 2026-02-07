#include <iostream>
using namespace std;

int changeValue(int num)
{
    num = num + 10;
    return num;
}

main()
{
    int num = 373;
    cout << num << endl;      // print 373
    int r = changeValue(num); // call by value.. changes happen in above function
    cout << r << endl;
    cout << num << endl; // print 373
}