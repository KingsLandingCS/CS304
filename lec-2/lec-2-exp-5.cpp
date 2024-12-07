#ifndef CAR_H
#define CAR_H
// #include <conio.h>
using namespace std;

class Car
{
private:
    int speed;

public:
    Car(); // Constructor
    void accelerate();
    void brake();
    void displaySpeed() const;
};

#endif

// 5. SEPARATION OF INTERFACE & IMPLEMENTATION
// Definition:
// Separation of interface and implementation is a design principle where the interface (the declaration of methods and properties) is separated from the actual implementation (the definition of those methods).

// In C++, this can be done by using header files for the interface and separate source files for the implementation.