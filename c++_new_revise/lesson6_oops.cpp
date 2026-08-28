#include <iostream>
using namespace std;

// creating class Student
class Student
{
public:
    // data members
    string name;
    int age;
    int marks[1];

    // member functions
    void display()
    {
        cout << name << endl;
        cout << age << endl;

        for (int i = 0; i < 4; i++)
        {
            cout << marks[i] << endl;
        }
    }
};

int main()
{
    // creating object s1 from class Student
    cout << "Data of stuent 1: ";
    Student s1;

    // giving data to s1
    s1.name = "Shivam";
    s1.age = 21;
    s1.marks[0] = 10;

    s1.display();

    // creating object s2 from class Student
    cout << "Data of stuent 2: ";
    Student s2;

    // giving data to s2
    s2.name = "Rahul";
    s2.age = 21;

    s2.marks[0] = 100;
    s2.marks[1] = 90;
    s2.marks[2] = 80;
    s2.marks[3] = 70;
    s2.marks[4] = 60;

    s2.display(); // call disply for s2 , it is giving s2.name and s2.age and s2.marks

    return 0;
}
