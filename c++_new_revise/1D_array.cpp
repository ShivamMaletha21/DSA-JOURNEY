#include <iostream>

int main()
{
    int arr[6];

    std::cout << "Enter number: ";
    for (int i = 0; i <= 5; i++)
    {

        std::cin >> arr[i];
    }

    std::cout << "output: ";
    for (int i = 0; i <= 5; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
    // }

    // Level 1 — Basic
    // WAP to declare and initialize a 1D array and print all its elements.
    // WAP to take 5 elements as input from the user and print them.
    // WAP to print the first and last element of an array.
    // WAP to print all elements of an array in reverse order.
    // WAP to find the sum of all elements of an array.
    // WAP to find the maximum element of an array.
    // WAP to find the minimum element of an array.

    // WAP to declare and initialize a 1D array and print all its elements.
    // int main()
    // {

    //     int array1[5] = {1, 2, 3, 4, 5};

    //     std::cout << " the given array is: ";
    //     ;

    //     for (int i = 0; i < 5; i++)
    //     {
    //         std::cout << array1[i];
    //     }
    //     return 0;
    // }

    // WAP to take 5 elements as input from the user and print them.
    // int main()
    // {

    //     int arr[5];

    //     std::cout << "Enter input";
    //     for (int i = 0; i < 6; i++)
    //     {
    //         std::cin >> arr[i];
    //     }

    //     std::cout << "the values are: ";
    //     for (int i = 0; i < 6; i++)
    //     {
    //         std::cout << arr[i];
    //     }
    //     return 0;
    // }

    // WAP to print the first and last element of an array.

    // int main()
    // {

    //     int array[4] = {10, 20, 30, 50};

    //     std::cout << "first element" << array[0];
    //     std::cout << "last element" << array[3];
    // }

    // WAP to print all elements of an array in reverse order.

    // int main()
    // {

    //     int arr[5] = {1, 2, 3, 4, 5};
    //     int size = sizeof(arr) / sizeof(arr[0]);

    //     for (int i = size - 1; i >= 0; i--)
    //     {
    //         std::cout << arr[i];
    //     }
    //     return 0;
    // }

    // WAP to find the sum of all elements of an array.

    // int main()
    // {
    //     int sum = 0;
    //     int array[5] = {10, 20, 30, 40, 50};
    //     for (int i = 0; i < 5; i++)
    //     {
    //         sum = sum + array[i];
    //     }
    //     std::cout << "the sum value is: " << sum;
    //     return 0;
    // }

    // WAP to find the maximum element of an array.
    // int main()
    // {

    //     int arr[5] = {10, 20, 30, 40, 50};
    //     int max = arr[0];

    //     for (int i = 0; i < 5; i++)
    //     {

    //         // If the if condition is false, the code inside the if block does not execute,
    //         // but the loop itself continues to the next iteration
    //         if (max < arr[i])
    //         {

    //             max = arr[i]; // update max.. for first iteration where 10<10 here for this iteration
    //             // if dont work on it and then moves to i = 1, iteration
    //         }
    //     }
    //     std::cout << max;
    //     return 0;
    // }

    // WAP to find the minimum element of an array.
    // int main()
    // {
    //     int arr[5] = {40, 30, 50, 2, 90};
    //     int min = arr[0];

    //     for (int i = 0; i < 5; i++)
    //     {

    //         if (min > arr[i])

    //         {
    //             min = arr[i];
    //         }
    //     }
    //     std::cout << min;
    //     return 0;
    // }

#include <iostream>
    using namespace std;

    int main()
    {

        int nums[5] = {10, 20, 30, 40, 50};

        for (int i = 0; i < 5; i++)
        {
            cout << nums[i] << endl;
        }

        return 0;
    }