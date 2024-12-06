#include <iostream>
// #include <conio.h>
using namespace std;

// Abstract class as an interface
class Shape
{
public:
    virtual void draw() = 0;   // pure virtual function
    virtual double area() = 0; // Another pure virtual function
};

// Class implementing the interface
class Circle : Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() override
    {
        cout << "Drawing a Circle" << endl;
    }

    double area() override
    {
        return 3.14159 * radius * radius;
    }
};

// Another class implementing the Interface
class Rectangle : public Shape
{
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() override
    {
        cout << "Drawing a Rectangle" << endl;
    }

    double area() override
    {
        return width * height;
    }
};

int main()
{
    Shape *circle = new Circle(5.0);
    Shape *rectangle = new Rectangle(4.0, 6.0);

    circle->draw();
    cout << "Circle Area: " << circle->area() << endl;

    rectangle->draw();
    cout << "Rectangle Area: " << rectangle->area() << endl;

    delete circle;
    delete rectangle;

    // getch();
    return 0;
}

// An interface in Object-Oriented Programming is like a contract that defines a set of methods that a class must implement. It specifies what a class should do but
//  not how it does it. In C++, interfaces are typically implemented using abstract classes.