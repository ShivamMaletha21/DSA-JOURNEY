// 1D Arrays

// Q1. Create and Print
// WAP to create an integer array of size 5, store 5 numbers in it, and print all the elements.
#include <iostream>
using namespace std;

// int main()
// {

//     int arr[5] = {1, 2, 3, 4, 5};

//     cout << " the array is: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }
//     return 0;
// }

// Q2. Take Input
// WAP to create an integer array of size 5, take 5 numbers from the user, and print them.

// int main()
// {
//     int arr[5];

//     cout << "write elements: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "the array is: ";

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }
//     return 0;
// }

// Q4. Modify an Element
// WAP to create an array of 5 integers. Change the third element to 100 and print the complete array.

// int main()
// {

//     int arr2[5] = {1, 2, 3, 4, 5};

//     arr2[2] = 100;

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr2[i] << " ";
//     }

//     return 0;
// }

// Q5. Traverse and Find Sum

// WAP to take 5 integers into an array and calculate their sum using a loop.
// Input:
// 10 20 30 40 50
// Output:
// 150

// int main()
// {
//     int arr3[5] = {10, 20, 30, 40, 50};

//     int sum = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         sum += arr3[i];
//     }
//     cout << sum;
//     return 0;
// }

// Q6. Reverse Printing
// WAP to take 5 integers into an array and print them in reverse order.
// Input:
// 10 20 30 40 50

// Output:
// 50 40 30 20 10

// int main()
// {
//     int arr4[5] = {10, 20, 30, 40, 50};

//     for (int i = 4; i >= 0; i--)
//     {
//         cout << arr4[i] << " ";
//     }
//     return 0;
// }

// what if we dont know the index?
// then we will use size:

// int size = sizeof(arr) / sizeof(arr[0]);
// for (int i = size - 1; i >= 0; i--) , size -1 bcz then it gives us index
// {
//     cout << arr[i] << " ";
// }

// 2D Array — Practice

// Q7. Create and Print a Matrix

// WAP to create a 3 × 3 integer array, store values in it, and print it in matrix form.

// Example:

// 1 2 3
// 4 5 6
// 7 8 9