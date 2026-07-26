// #include <iostream>

// int add(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     int result = add(10, 20);

//     std::cout << result;
//     return 0;
// }

// call by value
// #include <iostream>
// using namespace std;

// void fun(int x)
// {
//     x = 100;
//     cout << "the value of x is: " << x << "\n";
// }

// int main()
// {
//     int a = 10;
//     fun(a);

//     cout << "the value of a is: " << a;
// }

// void change(string text)
// {
//     text = text + "Goodbye";

//     cout << text;
// }

// int main()
// {
//     string message = "Hello";

//     change(message);

//     cout << message;
// }

// Questions based on pass by values
// Q1.Simple value passing
// Write a program with a function that takes an integer as a parameter and changes the parameter to 100. In
//   main(),
//   pass a variable with the value 10 and print the variable after the function call.
//   Question : What will be the output ?

#include <iostream>

// void integ(int a)
// {
//     a = a + 90;
//     std::cout << "the value of a is: " << a;
// }

// int main()
// {
//     int x = 10;

//     integ(x);
// }

// Q2.Add a value
//     Write a function that takes an integer by value and adds 50 to the parameter.Call the function with a variable containing 20.
//     Print the variable before and after the function call.
//     Question : What will be the output
//     ?

// void func(int x)
// {
//     x = x + 50;
//     std::cout << "variable before the function call: " << x << "\n";
// }
// int main()
// {

//     int a = 20;
//     func(a);
//     std::cout << "variable after the functon call: " << a;
// }

// Q4.Understand the copy

//     A variable x contains 25. You pass x to a function using pass by value.Inside the function,
//     the parameter is changed to 500.

//     Question :

//     What is the value of the parameter inside the function
//     ? What is the value of x after the function finishes
//     ?

// int func(int a)
// {
//     a = a + 475;
//     std::cout << "value of a: " << a;
// }
// int main()
// {
//     int x = 25;

//     func(x);
// }

// Q14.Three - step modification

//   You have :
//     x = 10
//         Pass x by value to a function.
//         Inside the function :
//     Add 20. Multiply by 2. Subtract 10. Print the parameter.
//     After the function call,
//     print x.
//     Question : What are the two outputs
//     ?

void addition(int add)
{
    add = add + 40;
    std::cout << "the addition number are: " << add << "\n";
}

void multiply(int mult)
{
    mult = mult * 4;
    std::cout << "the multiplication are number are: " << mult << "\n";
}

void subtract(int sub)
{
    sub = sub - 4;
    std::cout << "the subtract number are: " << sub << "\n";
}

int main()
{

    int a = 30;

    addition(a);
    multiply(a);
    subtract(a);
}