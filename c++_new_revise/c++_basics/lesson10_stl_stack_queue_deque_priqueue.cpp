// Stack -> LIFO (last in first out)

#include <iostream>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

// Q1. Basic Stack
// WAP to create a stack of integers, insert five elements into it, and display the top element

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << endl; // to see the top element

    // Create temp as a copy of s
    stack<int> temp = s; // initialy s is empty , creating a copy , as if we want to print all element then stack
    // works only with the top element so evrytime the loop runs it pop out the top element and print it and if we dont have copy then whole stack is destroyed.... s is the original and temp is the copy.

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    // remove the top element, and display the remaining stack elements.
    s.pop();

    stack<int> temp2 = s;
    while (!temp2.empty())
    {
        cout << temp2.top() << " ";
        temp2.pop();
    }
}

// Q2. Stack of Characters
// WAP to create a stack of characters, insert five characters,
//  and remove and display all characters one by one.

int main()
{
    stack<string> names;

    names.push("Rahul");
    names.push("Kartik");
    names.push("Shivam");
    names.push("Tanishq");
    names.push("Rohit");

    stack<string> temp = names;

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
}

// Questions based on Queue:
// Q1. Basic Queue -> FIFO (first in first out)

// WAP to create a queue of integers, insert five elements,
// and display the front and back elements.

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.front() << endl;
    cout << q.back() << endl;

    // creating a copy
    queue<int> temp = q;

    while (!temp.empty())
    {
        cout << temp.front() << " " << endl;
        temp.pop();
    }

    cout << "is the temp queue empty: " << temp.empty() << endl;
    cout << "is the real queue empty: " << q.empty();
}

// Practising questions on Deque

// Q1. Basic Deque
// WAP to create a deque of integers, insert five elements,
// and display the front and back elements.

int main()
{

    deque<int> d;

    // push front()
    d.push_front(10); // first 10 will go then 20, then 30 and then 40 so it becomes -> 40,30,20,10
    d.push_front(20);
    d.push_front(30);
    d.push_front(40);

    // push back()
    d.push_back(100);
    d.push_back(200);
    d.push_back(300);

    deque<int> temp = d;

    // while (!temp.empty())
    // {
    //     cout << temp.front() << " " << endl;
    //     temp.pop_front();
    // }

    // removing front element
    d.pop_front();

    // removing last element
    d.pop_back();

    // accesing element
    cout << d[3] << endl;
    cout << d.at(4);
}

// Priority Queue -> element with highest priority is accessed first

// Q1. Basic Priority Queue
// WAP to create a priority queue of integers, insert five elements,
//  and display the element having the highest priority.

// push -> add element
// pop() -> remove highest priority
// top() -> see highest priority
int main()
{

    priority_queue<int> pq;
    pq.push(10);
    pq.push(89);
    pq.push(20);
    pq.push(200);

    cout << pq.top() << endl; // returns the element with highest priority

    pq.pop(); // highest priority element is removed
    cout << pq.top();
}
