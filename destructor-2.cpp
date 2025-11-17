#include <iostream>

using namespace std;

class Customer
{
    string name;
    int *data;

public:
    Customer(string name)
    {
        this->name = name;
        cout << "constructor is" << name << endl;
    }

    ~Customer()
    {
        cout << "destructor is" << name << endl;
    }
};

int main()
{
    Customer A1("1"), A2("2"), A3("3");
}