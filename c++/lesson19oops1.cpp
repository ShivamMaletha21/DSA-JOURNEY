#include <iostream>
using namespace std;

int main()
{

    // creating a class
    class BankAccount // BankAccount is a class name
    {
    private: // data .. hidden
        string name;
        double balance;

    public:
        // constructor (runs automatically when objct is created)
        BankAccount(string n, double b)
        {
            name = n;
            balance = b;
        }

        // function to deposit money
        void deposit(double amount)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }

        // function to withdraw money
        void withdraw(double amount)
        {
            if (amount > balance)
            {
                cout << "Insufficinet balance" << endl;
            }
            else
            {
                balance = balance - amount;
                cout << "Withdraw : " << amount << endl;
            }
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Balance: " << balance << endl;
        }
    };

    // creating object
    BankAccount acc1("Shivam", 5000); // constructor initialization
    // call function
    acc1.display();
    acc1.deposit(20000);
    acc1.withdraw(5000);
    acc1.display();

    return 0;
}
