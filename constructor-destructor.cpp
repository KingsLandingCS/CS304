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

    void display()
    {
        cout << name << " " << accountNumber << " " << balance << endl;
    }
};

int main()
{
    Customer A1;
    Customer A2("Rohit", 23, 1000);
    A1.display();
    A2.display();
    return 0;
}