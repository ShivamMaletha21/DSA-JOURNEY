// Level 1 — Basic Understanding

// Q1. Create and Print a Pair
// WAP to create a pair that stores an integer and a string, assign values to it, and print both values.
#include <iostream>
#include <vector>
using namespace std;

// int main()
// {

//     // creating a pair "p", containing first string and second an integer
//     pair<string, int> p;

//     p.first = "Shivam";
//     p.second = 20;

//     cout << p.first << " ";
//     cout << p.second;
// }

// Q2. Pair of Two Integers
// WAP to create a pair of two integers, store two numbers in it, and print the first and second values separately.
// int main()
// {
//     pair<int, int> p;
//     p.first = 10;
//     p.second = 20;

//     cout << p.first << " ";
//     cout << p.second;
// }

// Q3. Access Pair Elements
// WAP to create a pair containing a student's name and age, and print the name and age separately using the pair's elements.

// int main()
// {
//     pair<string, int> p = {"Shivam", 22};
//     cout << p.first << " ";
//     cout << p.second;
// }

// Q4. Take Input into a Pair
// WAP to take an integer and a string as input from the user and store them in a pair.
//  Print the stored values.
// int main()
// {
//     pair<int, string> p;
//     cin >> p.first;
//     cin >> p.second;

//     cout << p.first << " ";
//     cout << p.second;
// }

// Questions on vector<pair<>>

// Q1. Create a Vector of Pairs
// WAP to create a vector that stores pairs of two integers.
//  Add three pairs to the vector and print all the pairs.
// int main()
// {
//     vector<pair<int, int>> v;

//     v.push_back({10, 20});
//     v.push_back({30, 40});
//     v.push_back({50, 60});
//     v.push_back({70, 80});
//     v.push_back({90, 100});

//     cout << "elements: ";

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i].first << ",";
//         cout << v[i].second << " ";
//     }
// }

// Q2. Student Roll Number and Marks
// WAP to store the roll number and marks of five
// students using a vector of pairs and print all student records.
int main()
{
    vector<pair<string, int>> v;

    v.push_back({"Shivam", 90});
    v.push_back({"Rahul", 99});
    v.push_back({"Rohan", 89});

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << ",";
        cout << v[i].second << " ";
    }

    return 0;
}