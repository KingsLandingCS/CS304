#include <iostream>
#include <string>
// #include <conio.h>
using namespace std;

class Shape
{
public:
    virtual void draw() const = 0; // pure virtual function
};

class Circle : public Shape
{
public:
    void draw() const override
    {
        cout << "Drawing a Circle!" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() const override
    {
        cout << "Drawing a Rectangle!" << endl;
    }
};

int main()
{
    Shape *shape1 = new Circle();
    Shape *shape2 = new Rectangle();

    shape1->draw();
    shape2->draw();

    delete shape1;
    delete shape2;
    // getch();
    return 0;
}

// 3. Interface
// Explanation:
// An interface specifies what a class should do, but not how it does it. In C++, an interface is represented using an abstract class with pure virtual functions. Derived classes must implement these functions.
// Promotes abstraction by hiding implementation details.
