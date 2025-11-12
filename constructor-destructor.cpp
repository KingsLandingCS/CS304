#include <iostream>
using namespace std;

class Customer
{
    string name;
    int accountNumber;
    int balance;

public:
    Customer()
    {
        name = "Rohit";
        accountNumber = 5;
        balance = 100;
    }

    // Parameterized Constructor
    Customer(string a, int b, int c)
    {
        name = a;
        accountNumber = b;
        balance = c;
    }
    Customer(string a, int b)
    {
        name = a;
        accountNumber = b;
    }

    void display()
    {
        cout << name << " " << accountNumber << " " << balance << endl;
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
    return 0;
}