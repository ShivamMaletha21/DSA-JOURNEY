#include <iostream>
using namespace std;

int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1); // The multiplication occurs during the return phase of recursion inside the function, and the final result is returned to main().
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int r = fact(num);
    cout << "Factorial of " << num << " is " << r << endl;
}