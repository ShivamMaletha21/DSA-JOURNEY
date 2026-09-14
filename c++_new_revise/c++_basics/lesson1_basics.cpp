// basic structure
#include <iostream>
using namespace std;

int main()
{
    cout << "I am learning c++";
    return 0;
}

// // input / output
#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is " << age << "\n";
    return 0;
}

// Data Type
#include <iostream>
#include <string>

int main()
{
    int age = 22;

    float height = 5.7f;

    double pi = 3.14444343;

    char grade = 'A';

    bool isStudent = true;

    std::string name = "Shivam Maletha";

    auto score = 85;

    const int MAX_SCORE = 100;

    // printing
    std::cout << "Name: " << name << "\n";
    std::cout << "age: " << age << "\n";
    std::cout << "height: " << height << "\n";
    std::cout << "Grade: " << grade << "\n";
    std::cout << "Student: " << isStudent << "\n";
    std::cout << "Score: " << score << "\n";

    return 0;
}
