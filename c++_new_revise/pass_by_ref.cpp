// pass by reference
#include <iostream>

// void fun(int &x)
// {
//     x = 200;
// }

// int main()
// {

//     int a = 20;

//     std::cout << "the varible value before reference: " << a << "\n";

//     fun(a); // passing a to function

//     std::cout << "the variable value after refence: " << a;

//     // question1
//     int ques1 = 100;
//     change(ques1);
//     std::cout << "changing the value: " << ques1;
// }

// Q1.Change a Variable
// WAP to create a function that takes an integer by reference and changes its value to 100.

// void change(int &y)
// {

//     y = 100;
// }

// int main()
// {
//     int origin_value = 10;

//     change(origin_value);
//     std::cout << "the orignal value is: " << origin_value;
// }

// Q2.Increment a Number
// WAP to create a function that takes an integer by reference and increases its value by 1.

// void increm(int &x)
// {
//     x = x + 1;
// }

// int main()
// {
//     int a = 100;
//     increm(a);
//     std::cout << "the value is: " << a;
// }

// Q4.Make a Number Zero
// WAP to create a function that takes an integer by reference and changes its value to 0.

// void dec(int &x)
// {
//     x = 0;
// }
// int main()
// {
//     int a = 100;
//     dec(a);
//     std::cout << "the value is: " << a;
// }

// Q5.Increase Two Numbers
// WAP to create a function that takes two integers by reference.
// The function should increase the first number by 10 and
// the second number by 20.
// Print both values before and after the function call.

// void first_num(int &x)
// {

//     x = x + 10;
// }

// void sec_num(int &y)
// {
//     y = y + 20;
// }

// int main()
// {
//     int a = 100;
//     int b = 100;

//     std::cout << "the value of a before pass: " << a << "\n";
//     std::cout << "the value of b before pass: " << b << "\n";

//     first_num(a);
//     sec_num(b);

//     std::cout << "the value of a after pass: " << a << "\n";
//     std::cout << "the value of b after pass: " << b << "\n";
// }

// Q6.Calculate Sum and Product
// WAP to create a function that takes two integers as input and calculates :
// Their sum
// Their product
// The function should store both results in variables passed by reference.

void sum(int &x, int &y)
{
    int sum = x + y;
    std::cout << "the sum values are: " << sum << "\n";
}
void prod(int &x, int &y)
{
    int prod = x * y;
    std::cout << "the prod values are: " << prod;
}

int main()
{

    int a = 5;
    int b = 4;

    sum(a, b);
    prod(a, b);
}