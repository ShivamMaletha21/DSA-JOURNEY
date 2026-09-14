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
// Q7. Student Initialization

// WAP to create a Student class with name, age, and marks.
// Create an object and initialize its values when the object is created. Display the values.

// Concept: Object creation + initialization

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// public:
//     // data members
//     string name;
//     int age;
//     int marks[3];

//     // display values
//     void display()
//     {

//         cout << "Name" << " " << name << " , " << "age" << " " << age << endl;

//         cout << "Marks" << " " << marks[0] << " " << marks[1] << " " << marks[2] << endl;
//     }
// };

// int main()
// {

//     // creating object
//     Student s1;

//     // giving values to s1 object
//     s1.name = "Shivam";
//     s1.age = 22;
//     s1.marks[0] = 40;
//     s1.marks[1] = 60;
//     s1.marks[2] = 90;

//     // calling member function
//     s1.display();
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////

// Level 4 — this Pointer
// Q9. Set Student Details

// WAP to create a Student class with name and age.
// Create a member function that accepts name and age as parameters and uses the
// this pointer to assign them to the object's data members.

// Concept: this pointer

// #include <iostream>
// #include <string>

// using namespace std;

// class Student
// {
// public:
//     // data members
//     string name;
//     int age;

//     // member function
//     void student_data(string name, int age)
//     {
//         this->name = name;
//         this->age = age;

//         cout << "Name" << " " << name << " " << "age" << age << endl;
//     }
// };

// int main()
// {

//     Student s1;

//     // calling member function
//     s1.student_data("Shivam", 21);
// }

// Q10. Employee Salary

// WAP to create an Employee class with name and salary. Create a member function that takes
// name and salary as parameters and initializes the object's data members using this.

// Concept: this pointer + parameter/member name conflict

// #include <iostream>
// #include <string>
// using namespace std;

// class Employee
// {
// public:
//     string name;
//     int salary;

//     void employee_data(string name, int salary)
//     {
//         this->name = name;
//         this->salary = salary;

//         cout << "name of employee: " << name << " " << "salary: " << salary << " " << endl;
//     }
// };

// int main()
// {

//     Employee e1;

//     e1.employee_data("karan", 40000);

//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Level 5 — Static Data Members
// Q11. Count Objects

// WAP to create a Student class with a static data member that keeps track of
// how many Student objects have been created. Create three objects and display the count.

// Concept: Static data member

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int age;

//     static int count;
// };

// int Student::count = 0;

// int main()
// {
//     Student s1;
//     cout << s1.count << endl;

//     Student s2;
//     s2.count = 43; // now s1 will also print 43 , now count becomes 43 for all
//     cout << s2.count << endl;

//     cout << s1.count;
// }

// Q12. Common College Name

// WAP to create a Student class with a static data member representing the college name.
// Create multiple objects and display the same college name for all objects.

// Concept: Shared data among objects
// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// public:
//     // declaration of static function
//     static string clgname;
// };

// // defintion + inititlization of static func
// string Student::clgname = "Graphic Era";

// int main()
// {

//     Student s1;
//     cout << s1.clgname << endl;

//     Student s2;
//     cout << s2.clgname << endl;

//     Student s3;
//     cout << s3.clgname << endl;

//     Student s4;
//     cout << s4.clgname << endl;

//     Student s5;
//     cout << s5.clgname << endl;

//     return 0;
// };

/////////////////////////////////////////////////////////////////////////////////////////////////////

// Level 6 — Static Member Functions

// Q13. Display Object Count

// WAP to create a Student class with a static data member count and a static member
// function that displays the number of objects created.

// Concept: Static data member + static member function
// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// public:
//     static int count;
//     int age;

//     // using constructor
//     Student()
//     {
//         count++;
//     }
//     // static member function can only access static data member
//     static void showcount() // here it cannot access int age
//     {
//         cout << count;
//     }
// };

// int Student::count = 0;

// int main()
// {

//     Student s1;
//     Student s2;

//     Student::showcount();

//     return 0;
// }

// Q14. Simple Static Function

// WAP to create a class containing a static data member and a static member
// function that modifies and displays the static data member.
// Call the function without creating an object.

// Concept: Why static member functions belong to the class

// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     static int count;

//     static void increase()
//     {
//         count++;
//     }

//     // static member function can only access static data member
//     static void showcount() // here it cannot access int age
//     {

//         cout << count;
//     }
// };

// int Student::count = 0;

// int main()
// {
//     Student::increase();
//     Student::increase();
//     Student::increase();
//     Student::increase();
//     Student::increase();

//     Student::showcount();

//     return 0;
//

//////////////////////////////////////////////////////////////////////////////////////////////////

// Level 7 — const Member Functions

// Q15. Display Student

// WAP to create a Student class with name and age. Create a const member function
// that only displays the student's information without modifying the object.

// Concept: const member function

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int age;

//     // creating const member function
//     void showdetails() const
//     {
//         cout << "Name" << " " << name << " " << "age" << " " << age << endl;
//     }
// };
// int main()
// {

//     Student s1;
//     s1.name = "Shivam";
//     s1.age = 21;
//     s1.showdetails();
// }

//////////////////////////////////////////////////////////////////////////////////////////////////

// Level 8 — Objects as Function Arguments

// Q17. Compare Students

// WAP to create a Student class with marks. Write a function that accepts
// two Student objects as arguments and displays which student has higher marks.

// Concept: Objects as function arguments
// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// public:
//     int marks;

//     void compare(Student s1, Student s2)
//     {
//         if (s1.marks > s2.marks)
//         {
//             cout << "Student1 has higest marks";
//         }
//         else
//         {
//             cout << "Student2 has higest marks";
//         }
//     }
// };

// int main()
// {
//     Student s1;
//     s1.marks = 50;

//     Student s2;
//     s2.marks = 40;

//     Student s3;
//     // function call using another object s3
//     s3.compare(s1, s2);

//     return 0;
// }

// Q18. Add Two Complex Numbers

// WAP to create a Complex class containing real and imaginary parts.
// Write a function that accepts two Complex objects and displays their sum.

// Concept: Passing objects to functions

// #include <iostream>
// using namespace std;

// class complex
// {
// public:
//     int real;
//     int imag;

//     void display(complex c1, complex c2)
//     {

//         cout << "real number sum :" << c1.real + c2.real << endl;
//         cout << "sum imaginary number: " << c1.imag + c2.imag << endl;
//     }
// };

// int main()
// {
//     complex c1;
//     c1.real = 50;
//     c1.imag = 2;

//     complex c2;
//     c2.real = 40;
//     c2.imag = 3;

//     complex c3;

//     // calling function using c3
//     c3.display(c1, c2);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Level 9 — Returning Objects

// Q20. Create Student
// WAP to create a Student class with name and marks. Write a function that
// creates a Student object, initializes it, and returns the object to main().
//  Display the returned object's information.

// Concept: Returning objects
