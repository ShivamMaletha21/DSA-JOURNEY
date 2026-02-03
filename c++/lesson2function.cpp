// can same function do work together
#include <iostream>
using namespace std;

// this way give error same function cannot use
// void show()
// {
//     cout << "Rahul";
// }

// void show()
// {
//     cout << "Ajay";
// }

// main()
// {
//     show();
// }

// but if i want same function and also want to access it.. then i have to create my own namespace

namespace first
{
    void show()
    {
        cout << "Arjun\n";
    }
}

namespace second
{
    void show()
    {
        cout << "Anuh";
    }
}
main()
{
    first::show();  // to access first name
    second::show(); // to access second name
}