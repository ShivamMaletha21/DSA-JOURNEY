#include <iostream>
using namespace std;

// int main()
// {

//     int x = 10;
//     // declaration of a pointer, &x  contain the address of x
//     // therfore ptr -> holds the address of x
//     // * this is called (adress-of), here it is used to tell c++ that ptr is a pointer
//     // int ptr = &x; this is wrong as this is normal integer value and &x is the adress
//     int *ptr = &x;

//     cout << x << endl;    // print 10
//     cout << &x << endl;   // adress of x
//     cout << ptr << endl;  // print address of x
//     cout << *ptr << endl; // print value of x i.e 10

//     // changing value with the help of pointer

//     *ptr = 50;
//     cout << x << endl;    // 50
//     cout << *ptr << endl; // 50
// }

// Level 1 — Basic Pointers

// Q1. Print Value and Address
// WAP to create an integer variable, assign it a value, and print:
// The value of the variable
// The memory address of the variable

// int main()
// {
//     int a = 40;

//     int *ptra = &a;

//     // printing value
//     cout << a << endl;

//     // printing address
//     cout << ptra << endl;

// }

// Q2. Create a Pointer
// WAP to create an integer variable and a pointer that stores the address of that variable.
// Print the value stored in the pointer.

// int main()
// {
//     int b = 50;

//     int *ptrb = &b;

//     // dereferencing
//     cout << *ptrb << endl;
// }

// Q4. Modify Through Pointer
// WAP to create an integer variable and a pointer to it.
// Change the original variable's value using the pointer and then print the variable.

// int main()
// {

//     int c = 50;

//     int *ptrc = &c;

//     *ptrc = 80;

//     cout << c << endl;

// return 0;
// }

// Q5. Print Everything

// WAP to create an integer variable and a pointer to it. Print:
// The value of the variable
// The address of the variable
// The value stored in the pointer
// The value obtained by dereferencing the pointer

// This is an important one. Make sure you understand what each output represents

// int main()
// {
//     int d = 50;

//     int *ptrd = &d;

//     // value of the variable
//     cout << d << endl;

//     // adress of the variable
//     cout << &d << endl;

//     // value stored in the pointer
//     cout << ptrd << endl;

//     // value obtained by dereferencing
//     cout << *ptrd << endl;

//     return 0;
// }

// Q6. Double a Number
// WAP to create a function that receives a pointer to an integer
//  and doubles the original integer using the pointer.

// void doubleNumber(int *a)
// {
//     *a = *a * 2;
// }

// int main()
// {
//     int var = 10;

//     doubleNumber(&var);
//     cout << var << endl;
//     return 0;
// }

// Q7. Increment Using Pointer
// WAP to create a function that receives the address of an integer and increases its value by 1.
// Print the value before and after the function call.

// void incFunction(int *b)
// {
//     (*b)++; //   *b = *b + 1;
// }

// int main()
// {
//     int value = 20;
//     cout << value << endl;

//     incFunction(&value);

//     cout << value << endl;

//     return 0;
// }

// Q9. Swap Using Pointers
// WAP to create a function that swaps two integer variables using pointers.
// Example:

// Before:
// a = 10
// b = 20

// After:
// a = 20
// b = 10

// void swapNumbers(int *ptra, int *ptrb)
// {
//     int temp = *ptra; // put a = 10 in temp i.e now temp = 10
//     *ptra = *ptrb;    // put b = 20 in ptra, i.e now a = 20
//     *ptrb = temp;     // put temp = 10 in ptrb i.e now b = 10;
// }
// int main()
// {
//     int a = 10;
//     int b = 20;

//     cout << a << endl;
//     cout << b << endl;

//     swapNumbers(&a, &b);

//     cout << a << endl;
//     cout << b << endl;
// }

// Level 3 — Pointers and Arrays
// Q10. Pointer to First Array Element
// WAP to create an integer array of 5 elements and a pointer that points to the first element of the array.
// Print the first element using the pointer

// int main()
// {
//     int array[5] = {10, 20, 30, 40, 50};

//     int *ptr = array;

//     cout << *ptr << endl;

//     *ptr++; // *(ptr++);Increment the pointer, while the dereference applies to the old pointer value.but do nothing with that value.
//     cout << *ptr << endl;

//     ptr++; // Move the pointer to the next element.
//     cout << *ptr << endl;

//     (*ptr)++;             //  Dereference ptr, then increment the value.
//     cout << *ptr << endl; // gives 11 (not 10),

//     return 0;
// }

// Q11.Traverse Array Using Pointer
// WAP to create an integer array of 5 elements and
// print all its elements using a pointer instead of directly using array indexing.

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *ptr = arr;

//     cout << *ptr << endl; // 10

//     ptr++;
//     cout << *ptr << endl; // 20

//     ptr++;
//     cout << *ptr << endl; // 30

//     ptr++;
//     cout << *ptr << endl; // 40

//     ptr++;
//     cout << *ptr << endl; // 50
// }

// Q13. Modify Array Using Pointer
// WAP to create an integer array of 5 elements. Use a pointer to change the value of the third element.
// Print the array before and after modification

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};

//     int *ptr = arr;

//     *(arr + 2) = 400; // *(arr + i ) and arr[i] both same but 1st one is with the help of pointer
//     cout << *ptr << endl;

//     ptr++;
//     cout << *ptr << endl;

//     ptr++;
//     cout << *ptr << endl;
// }

// Q14. Sum of Array Using Pointer
// WAP to calculate the sum of all elements of an integer array using a pointer.
// Do not directly access the elements using array indexing.

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};

//     int *ptr = arr;
//     int sum = 0;

//     for (int i = 0; i < 5; i++)
//     {

//         sum = *ptr + sum;
//         ptr++;
//     }
//     cout << sum << endl;
// }

// Q15. Reverse Traverse Using Pointer
// WAP to print the elements of an integer array in reverse order using pointers.

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};

//     // storing the adress of last element of array in a pointer
//     int *ptr = &arr[4];

//     for (int i = 4; i >= 0; i--)
//     {

//         cout << *ptr << endl;
//         ptr--;
//     }
// }

// Level 4 — nullptr

// Q16. Create a Null Pointer
// WAP to create an integer pointer that initially points to nothing.
// Check whether the pointer is null and print an appropriate message.

// int main()
// {
//     int *ptr = nullptr;
//     cout << ptr << endl; // show 0 address of null pointer

//     // cout << *ptr << endl; this is wrong as we are dereferencing a nullptr which points to nothing

//     if (ptr == nullptr)
//     {
//         cout << "Pointer points to nothing" << endl;
//     }
// }

// Q18. Assign a Variable to a Null Pointer

// WAP to create an integer pointer that initially points to nothing.
// Then create an integer variable and make the pointer point to that variable.
//  Print the variable's value using the pointer.

// This will help you understand:

// nullptr
//   ↓
// points to nothing

// then

// pointer
//   ↓
// points to valid variable

int main()
{
    int *ptr = nullptr;

    int a = 30;
    ptr = &a; // not *ptr = &a; bcz here it becomes a dereferencing and due to which
    //  it will be -> "Put the address of "a" (&a) into the value that ptr (*ptr) points to."

    cout << *ptr << endl; // print the value of the adress which store at ptr
}