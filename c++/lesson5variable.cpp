#include <iostream>
using namespace std;

int b = 40; // global variable can be used and access in anywhere in the code
main()
{

    int a; // it is local variable .. used and access inside the block.. used only inside this block

    static int c = 30; // it is a static variable
    cout << "Enter a number:  \n";
    cin >> a;

    cout << "The number is: " << a << endl;
    cout << "The number is: " << b << endl;
    cout << "The number is: " << c << endl;
}
