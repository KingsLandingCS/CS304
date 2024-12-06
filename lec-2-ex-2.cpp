#include <iostream>
// #include <conio.h>
using namespace std;

class Calculator
{
private:
    double a, b;

public:
    // Constructor to initilize values
    Calculator(double x, double y) : a(x), b(y) {}

    // Declaration of methods
    double add();
    double multiply();
};

// Implementation of methods
double Calculator::add()
{
    return a + b;
}

double Calculator::multiply()
{
    return a + b;
}

int main()
{
    Calculator calc(5, 3);

    cout << "Addition: " << calc.add() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;

    // getch();
    return 0;
}

// Implementation in the context of Object-Oriented Programming refers to providing the actual functionality or logic for the methods defined in a class or interface.
// It's the "how" behind the "what" defined by the class's design or interface.
// In C++, the implementation typically happens when you write the method definitions outside of the class declaration or within derived classes implementing an abstract base class.

// Key Points:
// Method Declaration: The methods are declared in the class definition (add and multiply in this case).
// Method Implementation: The logic for these methods is written outside the class using the scope resolution operator (::).