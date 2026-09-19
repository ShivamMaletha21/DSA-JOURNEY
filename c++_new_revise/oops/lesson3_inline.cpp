// without inline
#include <iostream>
using namespace std;

// class Student
// {
// public:
//     // declaration(not defining a function)
//     void display();
// };

// // defining a function outside class
// void Student::display()
// {
//     cout << "Hello Student";
// }

// int main()
// {
//     Student s;
//     s.display();
// }

// Using inline function
// with inline
// class Student
// {
// public:
//     void display();
// };

// inline void
// Student::display()
// {
//     cout << "Hello Student";
// }

// int main()
// {
//     Student s;
//     s.display();
// }

// A function which is define inside class is by-default inline
class Student
{
public:
    // inline function by-default
    void display()
    {
        cout << "Hey this is shivam";
    }
};

int main()
{
    Student s;
    s.display();
}