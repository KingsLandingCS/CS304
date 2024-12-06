#include <iostream>
// #include <conio.h>
using namespace std;

class Printer
{
public:
    virtual void print() = 0; // Pure virtual function
};

class InjectPrinter : public Printer
{
public:
    void print() override
    {
        cout << "Printing using an Inject Printer" << endl;
    }
};

class LaserPrinter : public Printer
{
public:
    void print() override
    {
        cout << "Printing using a laser Printer" << endl;
    }
};

int main()
{
    Printer *printer1 = new InjectPrinter();
    Printer *printer2 = new LaserPrinter();

    printer1->print();
    printer2->print();

    delete printer1;
    delete printer2;

    // getch();
    return 0;
}
