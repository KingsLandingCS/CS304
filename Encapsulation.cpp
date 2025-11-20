#include <iostream>

using namespace std;

class Customer
{
    string name;
    int accountNumber, balance;
    static int totalCustomer;
    static int totalBalance;

public:
    Customer(string name, int accountNumber, int balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
        totalCustomer++;
        totalBalance += balance;
    }

    static void accessStatic()
    {
        cout << "Total number of Customer" << totalCustomer << endl;
        cout << "Total Balance:" << totalBalance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            totalBalance += amount;
        }
    }

    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            totalBalance -= amount;
        }
    }

    void display()
    {
        cout << name << " " << accountNumber << " " << balance << " " << totalCustomer << endl;
    }

    void displayTotal()
    {
        cout << totalCustomer << endl;
    }
};

int Customer::totalCustomer = 0;
int Customer::totalBalance = 0;

int main()
{

    Customer A1("Rohit", 1, 1000);
    Customer A2("Mohit", 2, 1800);
    Customer A3("Ali", 3, 2000);
    A1.deposit(800);
    A2.withdraw(500);
    Customer::accessStatic();
    return 0;
}