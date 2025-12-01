#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "I'm working " << endl;
    }
};

class Student : public Human
{
    int rollNumber, fees;

public:
    Student(string name, int age, int rollNumber, int fees)
    {
        this->name = name;
        this->age = age;
        this->rollNumber = rollNumber;
        this->fees = fees;
    }
};

int main()
{
    Student A1("Rohit", 12, 10, 99);
    A1.work();
}
