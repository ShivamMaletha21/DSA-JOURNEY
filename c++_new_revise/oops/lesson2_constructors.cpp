// Level 1 — Basic
// Q1. Default Constructor

// WAP to create a Student class with data members name and age.
// Create a default constructor that initializes them with default values and display the student's details.

// Concept: Constructor, default constructor
// #include <iostream>
// #include <string>
// using namespace std;

// class student
// {
// public:
//     // data members
//     int age;
//     string name;
//     student()
//     {

//         age = 0;
//         name = "shivam";

//         cout << age << " " << name << endl;
//     }
// };

// int main()
// {
//     student s1;
// };

// Q2. Parameterized Constructor
// WAP to create a Student class with name, age, and marks.
// Use a parameterized constructor to initialize all three values and display them.

// Concept: Parameterized constructor
#include <iostream>
#include <string>
using namespace std;

// class Student
// {

// public:
//     string name;
//     int age;
//     int marks;

//     Student(string n, int ag, int m)
//     {
//         name = n;
//         age = ag;
//         marks = m;

//         cout << name << " " << age << " " << marks << endl;
//     }
// };

// int main()
// {

//     Student s1("Shivam", 21, 100);
//     Student s2("Rahul", 19, 80);

//     return 0;
// }

// Q3. Constructor Called Automatically

// WAP to create a Car class with a constructor that displays
// "Car object created" whenever an object is created. Create three objects and
//  observe how many times the constructor executes.

// Concept: Constructor execution

// class car
// {
// public:
//     car()
//     {
//         cout << "car object created" << endl;
//     }
// };

// int main()
// {
//     car c1;
//     car c2;
// }

// Q4. Constructor vs Normal Function
// WAP to create a Rectangle class having a constructor to initialize length and breadth,
// and a member function to calculate and display its area.

// Concept: Constructor + normal member function

// class rectangle
// {

// public:
//     int length;
//     int breadth;

//     // constructor to inititalze its leng and bread
//     rectangle(int l, int b)
//     {
//         length = l;
//         breadth = b;
//     }

//     // member function to calculate its area
//     void area()
//     {
//         cout << length * breadth << endl;
//     }
// };

// int main()
// {

//     rectangle r1(4, 5);
//     r1.area();
// }

// Q5. Multiple Objects

// WAP to create an Employee class with a parameterized constructor accepting name and salary.
// Create three employee objects with different values and display their details.
// Concept: Constructor + multiple objects

// class employee
// {
// public:
//     string name;
//     int salary;

//     employee(string n, int sl)
//     {
//         name = n;
//         salary = sl;

//         cout << name << " " << salary << endl;
//     }
// };

// int main()
// {

//     employee e1("shivam", 20000000);

//     return 0;
// };

// Q6. Destructor Basics

// WAP to create a class Student with a constructor and destructor.
// Display a message from both and observe the order in which they execute.

// Concept: Constructor + destructor

// class execute
// {
// public:
//     // creating constructor
//     execute()
//     {
//         cout << "constructor is created" << endl;
//     }

//     // creating destructor
//     ~execute()
//     {
//         cout << "constructor is destroyed";
//     }
// };

// int main()
// {
//     execute e1;

// return 0;
// };

// Level 2 — Basic

// Q8. Constructor Overloading
// WAP to create a Student class having three constructors: one with no arguments,
//  one accepting age, and one accepting name and age. Create objects using all three constructors.

// Concept: Constructor overloading

// class student
// {
// public:
//     int age;
//     string name;

//     // constructor 1
//     student()
//     {
//         cout << "no argument passing" << endl;
//     }

//     // constructor 2
//     student(int ag)
//     {
//         age = ag;

//         cout << age << endl;
//     }

//     // constructor 3
//     student(string nm, int ag)
//     {
//         age = ag;
//         name = nm;

//         cout << age << " " << name << endl;
//     }
// };

// int main()
// {

//     student s1;
//     student s2(21);
//     student s3("rahul", 23);
// };

// Q9. Constructor with Default Arguments
// WAP to create an Employee class whose constructor accepts name and salary,
// but provides default values when no arguments are supplied. Create objects using different numbers of arguments.

// Concept: Default arguments in constructor

// class employee
// {

// public:
//     string name;
//     int salary;

//     employee(string n = "Unknown", int sal = 0)
//     {

//         name = n;
//         salary = sal;

//         cout << name << " " << salary << endl;
//     }
// };

// int main()
// {

//     employee e1;
//     employee a2("shivam", 2000000);

//     return 0;
// }

// Q10. Copy Constructor

// WAP to create a Student class with name and marks. Create one object with a
// parameterized constructor and create another object by copying the first object using a copy constructor.
//  Display both objects.

// Concept: Copy constructor

class Student
{
public:
    string name;
    int marks;

    Student(string name, int marks)
    {
        this->name = name;
        this->marks = marks;
    }
    Student(const Student &other)
    {
        name = other.name;
        marks = other.marks;
    }
};

int main()
{
    Student s1("shivam", 22);
    Student s2 = s1;

    cout << s2.name;
}
