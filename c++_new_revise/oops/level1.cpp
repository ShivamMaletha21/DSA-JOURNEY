// Level 1 — Class, Object, Data Members

// Q1. Student Information
// WAP to create a Student class with data members name, age, and marks.
// Create one object and display all its information.

// Concept: Class, object, data members

// #include <iostream>
// #include <string>
// using namespace std;

// // creating class
// class Student
// {
// public:
//     // data members
//     string name;
//     int age;
//     int marks;
// };

// int main()
// {

//     // creating object (instance of a class)
//     Student s1;
//     s1.name = "Shivam";
//     s1.age = 21;
//     s1.marks = 80;

//     cout << "Name" << " " << s1.name << " " << "Age" << s1.age << " " << "Marks" << s1.marks;

//     return 0;
// };

// Q2. Car Information
// WAP to create a Car class with data members brand, model, and price.
// Create two objects and display their information.

// Concept: Multiple objects

// #include <iostream>
// #include <string>
// using namespace std;

// // creating class car
// class Car
// {

// public:
//     string brand;
//     string model;
//     int price;
// };

// int main()
// {
//     Car c1; // obj1
//     Car c2; // obj2

//     // giving values to obj1
//     c1.brand = "MarutiSuzuki";
//     c1.model = "Swift";
//     c1.price = 583900;

//     // giving values to obj2
//     c2.brand = "Hyundai";
//     c2.model = "i20";
//     c2.price = 599000;

//     // printing the values of car1
//     cout << "Value of car1: " << " " << c1.brand << " " << c1.model << " " << c1.price << endl;

//     // printing the values of car2
//     cout << "Values of car2: " << " " << c2.brand << " " << c2.model << " " << c2.price << endl;
// };

// Q3. Rectangle
// WAP to create a Rectangle class with data members length and breadth.
// Create an object and calculate its area.

// Concept: Class, object, data members

// #include <iostream>

// using namespace std;

// // creating class Rectangle
// class Rectangle
// {
//     // data members
// public:
//     int length;
//     int breadth;
// };

// int main()
// {

//     // creating object to calcuate its area
//     Rectangle area;
//     // providing values
//     area.length = 4;
//     area.breadth = 3;

//     // printing area
//     cout << "the area of rectangle is: " << area.length * area.breadth << endl;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Level 2 — Member Functions
// Q4. Student Result
// WAP to create a Student class with name and three subject marks.
// Create a member function to calculate and display the total marks.

// Concept: Data members + member functions

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {

// public:
//     // data members
//     string name;
//     int marks[3];

//     // member function
//     void total_marks()
//     {
//         // inside class marks[0] , outside s1.marks[0];
//         cout << "total marks: " << marks[0] + marks[1] + marks[2] << endl;
//     }
// };

// int main()
// {

//     Student s1;
//     s1.marks[0] = 10;
//     s1.marks[1] = 20;
//     s1.marks[2] = 30;

//     // calling member function
//     s1.total_marks();
// }

// Q5. Rectangle Area
// WAP to create a Rectangle class with length and breadth.
// Create a member function area() that calculates and displays the area.

// Concept: Member function accessing data members

// #include <iostream>
// using namespace std;

// // creating class
// class Rectangle
// {
// public:
//     // data members
//     int length;
//     int breadth;

//     // member function
//     void area()
//     {
//         cout << "the area of rect is: " << length * breadth;
//     }
// };

// int main()
// {

//     // creating object
//     Rectangle r1;

//     r1.length = 20;
//     r1.breadth = 30;

//     // calling member function
//     r1.area();
// }

// Q6. Bank Account
// WAP to create a BankAccount class with accountNumber and balance.
// Create member functions to deposit money, withdraw money, and display the balance.

// Concept: Object state + member functions

// #include <iostream>
// using namespace std;

// class BankAccount
// {
// public:
//     string accountNumber;
//     int balanceAmount;
//     int depositAmount;
//     int withdrawAmount;

//     // deposit money
//     void deposit()
//     {
//         balanceAmount = balanceAmount + depositAmount;

//         cout << "deposit amount: " << depositAmount << endl;
//     }

//     // withdraw money
//     void withdraw()
//     {
//         balanceAmount = balanceAmount - withdrawAmount;

//         cout << "withdraw amount: " << withdrawAmount << endl;
//     }

//     // display balance
//     void dsiplaybalance()
//     {
//         cout << "balance amount: " << balanceAmount << endl;
//     }
// };

// int main()
// {

//     BankAccount b1;

//     b1.accountNumber = "69WE3232Qr32";

//     b1.balanceAmount = 0;

//     b1.depositAmount = 5000; // a person is deposting money
//     b1.deposit();
//     b1.withdrawAmount = 3000; // and withdrwing also
//     b1.withdraw();

//     b1.dsiplaybalance();

//     return 0;
// };

/////////////////////////////////////////////////////////////////////////////////////////////////////
// Level 3 — Object Creation &Initialization
