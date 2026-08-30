// Level 1 — Basic Understanding

// Q1. Create and Print a Pair
// WAP to create a pair that stores an integer and a string, assign values to it, and print both values.
#include <iostream>
using namespace std;

int main()
{

    // creating a pair "p", containing first string and second an integer
    pair<string, int> p;

    p.first = "Shivam";
    p.second = 20;

    cout << p.first << " ";
    cout << p.second;
}

// Q2. Pair of Two Integers
// WAP to create a pair of two integers, store two numbers in it, and print the first and second values separately.