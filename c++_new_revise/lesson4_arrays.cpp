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

// int main()
// {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};

//     for (int i = 0; i < 3; i++)
//     {

//         for (int j = 0; j < 3; j++)
//         {
//             std::cout << arr[i][j] << " ";
//         }
//         std ::cout << "\n";
//     }
//     return 0;
// }

// Q8. Take Input in 2D Array
// WAP to create a 3 × 3 integer array and take all 9 values from the user using nested loops.
// Then print the matrix.

// int main()
// {
//     int arr[3][3];

//     // input
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//         cout << "\n";
//     }

//     // output
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j];
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// Q9. Access Specific Elements
// For a 3 × 3 array, WAP to print:
// First element
// Center element
// Last element

// Think carefully about their [row][column] indexes.

// int main()
// {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};

//     // first element
//     cout << arr[0][0];

//     cout << "\n";

//     // center element
//     cout << arr[1][1];

//     cout << "\n";

//     // last element
//     cout << arr[2][2];

//     return 0;
// }

// Q. Sum of All Elements
// WAP to take values in a 3 × 3 array and calculate the sum of all 9 elements using nested loops.
// Input
// 1 2 3
// 4 5 6
// 7 8 9

// Output:
// 45

int main()
{

    int sum = 0;

    int arr[3][3];

    // taking input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];

            sum += arr[i][j];
        }
    }
    cout << sum;

    return 0;
}