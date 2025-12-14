#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance, accountNumber;

public:
    Customer(string name, int balance, int accountNumber)
    {
        this->name = name;
        this->balance = balance;
        this->accountNumber = accountNumber;
    }

    // deposit
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " Amount is credited successfully" << endl;
        }
        else
        {
            throw " amount should be greater than 0";
        }
    }
    // withdraw

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " is debited successfully";
        }
        else if (amount < 0)
        {
            throw "Amount Should be greater than 0";
        }
        else
        {
            throw "Your balance is low";
        }
    }
};

int main()
{
    Customer C1("Rohit", 5000, 10);

    try
    {
        C1.deposit(100);
        C1.withdraw(6000);
    }
    catch (const char *e)
    {
        cout << "Exception Occured: " << e << endl;
    }

    return 0;
}