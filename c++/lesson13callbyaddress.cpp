#include <iostream>
using namespace std;

void changeValue(int *p)
{
    *p = *p + 10;
    cout << "Pointer Value: " << *p << endl;
}

main()
{
    int num;
    cout << "Enter value: ";
    cin >> num;
    cout << "Original Value: " << num << endl;
    changeValue(&num);
    cout << "New Value: " << num << endl;
}