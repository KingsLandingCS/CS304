#include <iostream>

using namespace std;

class Customer
{
    string name;
    int accountNumber, balance;
    static int totalCustomer;

public:
    Customer(string name, int accountNumber, int balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
        totalCustomer++;
    }

    static void accessStatic()
    {
        cout << totalCustomer << endl;
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

int main()
{

    Customer A1("Rohit", 1, 1000);
    Customer A2("Mohit", 2, 1800);
    Customer A3("Ali", 3, 2300);
    Customer::accessStatic();
    A2.displayTotal();
    return 0;
}