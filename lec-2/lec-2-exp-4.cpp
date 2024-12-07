#include <iostream>
#include <string>
// #include <conio.h>
using namespace std;

class Car
{
private:
    int speed;

public:
    Car() : speed(0) {}

    void accelerate()
    {
        speed += 10;
    }

    void brake()
    {
        if (speed >= 10)
        {
            speed -= 10;
        }
    }

    void displaySpeed() const
    {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

int main()
{
    Car myCar;
    myCar.accelerate();
    myCar.accelerate();
    myCar.displaySpeed(); // Should display speed: 20 km/h
    myCar.brake();
    myCar.displaySpeed(); // Should display Speed: 10 km/h

    // getch();
    return 0;
}

// Class Implementation: The class Car implements behaviors like accelerate, brake, and displaySpeed. These methods define what happens when you call them.
// Behavior: accelerate increases the speed by 10, and brake decreases the speed by 10. These are the behaviors of the car that are implemented inside the class.

// 4. IMPLEMENTATION
// Definition:
// Implementation refers to the actual coding of the methods and behaviors specified in a class (or interface). In other words, it’s the part of the class that defines how the methods will function.

// In C++, we define both the structure and behavior of the class through methods inside the class.