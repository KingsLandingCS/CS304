#include <iostream>

using namespace std;

class Person
{
public:
    int age;
    string name;

    Person()
    {
        age = 0;
        name = "";
    }
    // friend for stream insertion overloading
    friend ostream &operator<<(ostream &output, Person &p);
};

// stream insertion overloading
ostream &operator<<(ostream &output, Person &p)
{
    output << "Age is: " << p.age << endl;
    output << "Name is: " << p.name;
    return output;
}