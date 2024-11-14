#include <iostream>
// #include <conio.h>
using namespace std;

class Person
{
public:
    int age;
    string name, gender, address;
    void setInformation()
    {
        name = "John Doe";
        age = 27;
        gender = "Male";
        address = "Gujranwala";
    }

    void getInformation()
    {
        cout << "Name : " << name << endl;
    }
};

main()
{

    // getch();
    return 0;
}