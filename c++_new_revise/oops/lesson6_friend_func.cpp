// we can access data members of class which is private outside the class using friend

#include <iostream>
using namespace std;

class Student
{
private:
    int marks = 90;

public:
    // declaring a function inside class
    friend void showMarks(Student s); // passing whole object as a value not refrence &s, we can also do that
};
// defining a function outside class
void showMarks(Student s)
{
    cout << s.marks;
}

int main()
{
    Student s;
    showMarks(s);
}