// operations to perform
// 1. Create a file
// 2. Open a file
// 3. Read data
// 4. Write data
// 5. Delete FIle
// 6. Copy File

#include <iostream>
#include <fstream> // for file handling
#include <cstdio>  // for delete (remove)

using namespace std;

// creating a file .. using ofstream
int main()
{
    ofstream file("C:\\Users\\malet\\OneDrive\\Desktop\\test.txt");

    file.close();
}
