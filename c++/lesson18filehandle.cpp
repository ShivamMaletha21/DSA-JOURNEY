#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    // WRITE TO FILE
    ofstream outFile("C:\\Users\\malet\\OneDrive\\Desktop\\test.txt");

    if (!outFile)
    {
        cout << "File not found" << endl;
        return 1;
    }

    outFile << "Name: Shivam" << endl;
    outFile << "Age: 21" << endl;
    outFile << "Salary: 5000000" << endl;

    outFile.close();

    // READ FROM FILE
    ifstream inFile("C:\\Users\\malet\\OneDrive\\Desktop\\test.txt");

    string line;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    inFile.close();

    // Delete a file ...Using remove() from <cstdio>

    {
        if (remove("data.txt") == 0)
            cout << "File deleted successfully";
        else
            cout << "Error deleting file";
    }

    // Copy a file..Read from one file, write to another

    {
        ifstream source("source.txt");
        ofstream destination("copy.txt");

        string line;
        while (getline(source, line))
        {
            destination << line << endl;
        }

        source.close();
        destination.close();

        cout << "File copied successfully";
    }
    return 0;
}
