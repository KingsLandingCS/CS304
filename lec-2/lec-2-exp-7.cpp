#include <iostream>
#include "Car.h"
// #include <conio.h>
using namespace std;

int main()
{
    Car myCar;
    myCar.accelerate();
    myCar.displaySpeed();
    return 0;
}

// 5. SEPARATION OF INTERFACE & IMPLEMENTATION
// Definition:
// Separation of interface and implementation is a design principle where the interface (the declaration of methods and properties) is separated from the actual implementation (the definition of those methods).

// In C++, this can be done by using header files for the interface and separate source files for the implementation.