#include <iostream>
using namespace std;
// #include <conio.h>

// Class definition (blueprint)
class Car
{
public:
    string brand;
    int speed;

    void drive()
    {
        cout << "This car " << brand << " is diriving at" << speed << "km/h" << endl;
    }
};

int main()
{
    // Creating an object of the Car class
    Car myCar;

    // Assigning values to the object
    myCar.brand = "Toyota";
    myCar.speed = 100;

    // Using the object
    cout << "Brand: " << myCar.brand << endl;
    myCar.drive();

    // getch();
    return 0;
}
