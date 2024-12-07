#include "Car.h"
#include <iostream>
// #include <conio.h>
using namespace std;

Car::car() : speed(0) {}

void Car::accelerate()
{
    speed += 10;
}

void Car::brake()
{
    if (speed >= 10)
    {
        speed -= 10;
    }
}

void Car::displaySpeed() const
{
    cout << "Speed: " << speed << " km/h" << endl;
}

// 5. SEPARATION OF INTERFACE & IMPLEMENTATION
// Definition:
// Separation of interface and implementation is a design principle where the interface (the declaration of methods and properties) is separated from the actual implementation (the definition of those methods).

// In C++, this can be done by using header files for the interface and separate source files for the implementation.