// taking output

#include <iostream>
using namespace std;
int num = 100;

main()
{
    int num;
    cout << "Enter a number";
    cin >> num;  // taking input
    cout << num; // taking output .. output will be what you write

    cout << ::num; // output will be 100.. use to access global variable.. ie here it is 100
}