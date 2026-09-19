// this pointer -> points to the current object inside a non- static member function

#include <iostream>
using namespace std;

// class Student
// {
// public:
//     int age;
//     void setAge(int age)
//     {
//         this->age = age;
//         cout << age;
//     }
// };

// int main()
// {
//     Student s1;
//     s1.setAge(30);
// }

// const member function -> it is a function , used to read data not to modify it

class Children
{
public:
    int age;
    void show() const
    {
        cout << age;
    }
};

int main()
{
    Children c1;
    c1.age = 3;
    c1.show();
}