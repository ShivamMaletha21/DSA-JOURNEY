// copy constructor -> creates a new object by initializing it from an existing object of the same class.
#include <iostream>
using namespace std;

class student
{
public:
    int age;

    // constructor
    student(int a)
    {
        age = a;
    }

    // copy constructor
    student(const student &other)
    {
        age = other.age;
        cout << age;
    }
};

int main()
{
    student s1(22);
    student s2 = s1;
}

// virtual constructor