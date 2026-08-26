#include <iostream>
using namespace std;

int main()
{

    int x = 10;
    // declaration of a pointer, &x  contain the address of x
    // therfore ptr -> holds the address of x
    // * this is called (adress-of), here it is used to tell c++ that ptr is a pointer
    // int ptr = &x; this is wrong as this is normal integer value and &x is the adress
    int *ptr = &x;

    cout << x << endl;    // print 10
    cout << &x << endl;   // adress of x
    cout << ptr << endl;  // print address of x
    cout << *ptr << endl; // print value of x i.e 10

    // changing value with the help of pointer

    *ptr = 50;
    cout << x << endl;    // 50
    cout << *ptr << endl; // 50
}