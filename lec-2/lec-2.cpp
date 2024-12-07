#include <iostream>
// #include <conio.h>
using namespace std;

class BankAccount
{
private:
    double balance; // hidden data

public:
    BankAccount() : balance(0) {} // Constructor to initialize balance

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    BankAccount myAccount;
    myAccount.deposit(100.50); // Access balance only through methods
    cout << "Current Balance: $" << myAccount.getBalance() << endl;
    // getch();
    return 0;
}

// balance is private, meaning it cannot be directly accessed or modified.
// deposit() method adds money to the balance after validation.
// getBalance() method provides read-only access to the balance.

// . Information Hiding
// Explanation:
// Information hiding is the principle of restricting access to some of the object's data. In object-oriented programming, we use private or protected access specifiers to hide the internal details of a class.
// This ensures:
// Better control over how data is modified.
// Avoidance of accidental changes or misuse.