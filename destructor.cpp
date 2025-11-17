#include <iostream>

using namespace std;

class Customer
{
    string name;
    int *data;

public:
    Customer()
    {
        name = "Rohit";
        data = new int;
        *data = 10;
        cout << "constructor is called" << endl;
    }

    ~Customer()
    {
        delete data;
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    Customer A1, A2, A3;
}