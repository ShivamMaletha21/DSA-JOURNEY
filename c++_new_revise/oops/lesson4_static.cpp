#include <iostream>
using namespace std;

// class Student
// {
// public:
//     // static data member
//     static int count;

//     Student()
//     {
//         count++;
//         cout << count << endl;
//     }
// };

// int Student::count = 0;

// int main()
// {
//     Student s1; // count ->1
//     Student s2; // count ->2
//     Student s3; // count ->3

//     return 0;
// }

// static member function -> dont need object to call

class student
{
public:
    static int count;

    // member function
    static void showcount()
    {
        cout << count;
    }
};

int student::count = 10;

int main()
{

    // static member function belongs to class, so we are calling it using class name
    student::showcount();
}