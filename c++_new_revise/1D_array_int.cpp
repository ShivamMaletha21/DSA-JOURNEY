// Level 2 — Basic to Intermediate
// WAP to count the number of even elements in an array.
// WAP to count the number of odd elements in an array.
// WAP to count the number of positive elements in an array.
// WAP to count the number of negative elements in an array.
// WAP to count the number of zeroes in an array.
// WAP to find the sum of all even elements in an array.
// WAP to find the sum of all odd elements in an array.
// WAP to find the largest element in an array.
// WAP to find the second largest element in an array.
// WAP to find the smallest element in an array.
// WAP to find the second smallest element in an array.
// WAP to search for a given element in an array.
// WAP to find the position of a given element in an array.
// WAP to count the frequency of a given element in an array.
// WAP to find the total number of distinct elements in an array.

#include <iostream>

// WAP to count the number of even elements in an array.
int main()
{

    int arr[10] = {2, 4, 3, 5, 8, 21, 20, 30, 50, 60};

    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {

            count++;
            std::cout << arr[i] << " ";
        }
        }

    std::cout << "total elements : " << count;
    return 0;
}

