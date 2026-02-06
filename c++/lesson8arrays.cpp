#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    cout << "Enter array elements: ";

    for (int i = 0; i <= 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i];
    }
}
