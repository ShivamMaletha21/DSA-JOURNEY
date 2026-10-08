// Q1 Find largest element
//     [5, 2, 9, 1, 7]
// → 9

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {5, 2, 9, 1, 7};

    int a = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > a)
        {

            a = arr[i];
        }
    };
    cout << a;
    return 0;
};