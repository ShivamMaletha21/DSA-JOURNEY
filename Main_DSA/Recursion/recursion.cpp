// Recursion -> When a function calls itself until a specific condition is met.

// Ques1. print name N times using recursion
#include <iostream>
#include <string>

using namespace std;

void name(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << "Shivam" << " ";

        // recursive call
        name(n - 1);
    }
}
int main()
{
    name(5);
}
