#include <iostream>
using namespace std;

// creating structure
struct Emp // data type.. This is a structure definition.. defining what an Emp looks like
{
    string name; // doesn’t store a value — it only defines a type.
    int number;
    double salary;
};

main()
{
    struct Emp E; // This line creates a variable. .. struct Emp -> type ,, E -> variable name
    E.name = "Rahul";
    E.number = 8083831;
    E.salary = 500000;

    cout << E.name << endl
         << E.number << endl
         << E.salary << endl
         << sizeof(Emp);
}
