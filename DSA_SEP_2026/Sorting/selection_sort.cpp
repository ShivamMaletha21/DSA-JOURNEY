// question sort ->   7, 4, 5, 2, 6 using selection sort
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 4, 5, 2, 6};
    int n = 5;

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)

        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j; // minIndex will get updated until it hit's the condition j < n , as we have j++
            }
        }
        // swapping array with i position with the minimum element that we found at minIndex
        swap(arr[i], arr[minIndex]);
    }

    // printing the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}