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
    // friend for stream extraction overloading
    friend istream &operator>>(istream &input, Person &p);
};

// stream insertion overloading
ostream &operator<<(ostream &output, Person &p)
{
    output << "Age is: " << p.age << endl;
    output << "Name is: " << p.name;
    return output;
}

// stream extraction overloading
istream &operator>>(istream &input, Person &p)
{
    input >> p.age >> p.name;
    return input;
}

int main()
{
    cout << "Enter Age & Name" << endl;
    Person obj;
    cin >> obj;
    cout << obj;
    return 0;
}