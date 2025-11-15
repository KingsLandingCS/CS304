#include <iostream>
using namespace std;

class Customer
{
    string name;
    int accountNumber;
    int balance;
    int *roi;

public:
    // Default Constructor
    Customer()
    {
        name = "Rohit";
        accountNumber = 5;
        balance = 100;
        roi = new int[100];
    }

    // Parameterized Constructor
    // Customer(string name, int accountNumber, int balance)
    // {
    //     this->name = name;
    //     this->accountNumber = accountNumber;
    //     this->balance = balance;
    // }

    // if the same constructor is being used multiple times with different parameters, it is called constructor overloading
    Customer(string a, int b)
    {
        name = a;
        accountNumber = b;
        balance = 50;
    }

    // Inline Constructor

    inline Customer(string a, int b, int c) : name(a), accountNumber(b), balance(c)
    {
    }

    void display()
    {
        cout << name << " " << accountNumber << " " << balance << endl;
    }

    // Copy Constructor
    Customer(Customer &B)
    {
        name = B.name;
        accountNumber = B.accountNumber;
        balance = B.balance;
    }
};

int main()
{
    Customer A1;
    Customer A2("Rohit", 23, 1000);
    Customer A3("Mohit", 26);
    A1.display();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();
    A5 = A3;
    A5.display();
    return 0;
}