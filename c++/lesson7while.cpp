#include <iostream>
using namespace std;

main()
{
    int pswrd = 58473;
    int mypwd;

    cout << "Enter Password: ";
    cin >> mypwd;

    while (pswrd > 0)
    {
        if (pswrd != mypwd)
        {

            cout << "ReEnter Password: ";
            cin >> mypwd;
        }
        else
        {
            cout << "unlocked";
            break;
        }
    }
}