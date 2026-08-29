// STL vector Practice Questions

// 1. Create and Display
// WAP to create a vector<int> containing 5 integers and display all its elements.
// Concept: vector<int>, initialization, traversal

#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     vector<int> v; // creatinh a vector v whose type is integer
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     v.push_back(50);

//     for (int i = 0; i < 5; i++)
//     {
//         cout << v[i] << " ";
//     }
//     return 0;
// }

// 2. Dynamic Input
// WAP to take N integers from the user and store them in a vector using push_back(). Display the vector.
// Concept: push_back()

// int main()
// {

//     vector<int> v;

//     // taking input
//     for (int i = 0; i < 5; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }

//     cout << "given vector is: ";
//     // taking output
//     for (int i = 0; i < 5; i++)
//     {
//         cout << v[i] << " ";
//     }
// }

// 3. Size of Vector
// WAP to take N integers in a vector and display the number of elements using size().
// Concept: size()

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "Elements in the vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }

    // print size of a vector
    cout << "Size of vector is: " << v.size() << endl;

    // print first element of a vector
    cout << "first element is: " << v.front() << endl;

    // print the last element of a vector
    cout << "last element is: " << v.back() << endl;

    // Access Using at()
    cout << "accessing using at: " << v.at(0) << endl;

    // Check Empty .. gives boolean value , if 0 -> no , if 1 -> means true
    cout << "check empty element: " << v.empty() << endl;

    // Remove Last Element
    v.pop_back();

    // now elements in the current vector
    cout << "Elements in the current vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }
    // tells the current last element
    cout << "the last element right now is: " << v.back() << endl;

    // Insert at End Using insert()
    v.insert(v.begin() + 2, 300);
    // now elements in the current vector
    cout << "Elements in the current vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }

    // erasing element
    v.erase(v.begin() + 2, v.begin() + 5);
    // now elements in the current vector
    cout << "Elements in the current vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }

    //  Clear Vector
    v.clear();

    // now elements in the current vector
    cout << "Elements in the current vector: " << v.empty() << endl; // 1 means the vector is empty

    return 0;
}
