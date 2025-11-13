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

    void display()
    {
        cout << name << " " << accountNumber << " " << balance << " " << totalCustomer << endl;
    }
};

int Customer::totalCustomer = 0;

int main()
{

    Customer A1("Rohit", 1, 1000);
    Customer A2("Mohit", 1, 1800);
    A1.display();
    A2.display();

    return 0;
}