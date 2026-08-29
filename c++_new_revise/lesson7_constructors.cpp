#include <iostream>
#include <string>
using namespace std;

// class Student
// {
// public:
//     string name;
//     int age;

//     // Constructor
//     Student()
//     {
//         name = "Shivam";
//         age = 22;
//     }
// };

// int main()
// {
//     Student s1;

//     cout << s1.name << endl;
//     cout << s1.age << endl;

//     return 0;
// }

// 1.. Default constructor
class Student
{

public:
    Student()
    {
        cout << "Student created";
    }
};

int main()
{
    Student s1;
}

// 2.. Parametrized constructor
// class Student
// {
// public:
//     string name;
//     int age;

//     Student(string n, int a)
//     {

//         name = n;
//         age = a;
//     }
// };

// int main()
// {
//     Student s1("Shivam", 22);
//     cout << s1.name << endl;
//     cout << s1.age << endl;

//     return 0;
// }