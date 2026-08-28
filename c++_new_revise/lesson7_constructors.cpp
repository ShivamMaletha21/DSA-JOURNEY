#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    // Constructor
    Student()
    {
        name = "Shivam";
        age = 22;
    }
};

int main()
{
    Student s1;

    cout << s1.name << endl;
    cout << s1.age << endl;

    return 0;
}