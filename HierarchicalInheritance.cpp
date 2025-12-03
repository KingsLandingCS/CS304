#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human()
    {
    };

    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << name << " " << age << endl;
    }

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

    void display()
    {
        cout << name << " " << age << " " << rollNumber << " " << fees << endl;
    }
};

class Teacher : public Human
{
    int salary;

public:
    Teacher(int salary, string name, int age)
    {
        this->salary = salary;
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << name << " " << age << " " << salary << " " << endl;
    }
};

int main()
{
    Student A1("Rohit", 12, 10, 99);
    A1.work();
    Teacher A2(99, "Zubi", 29);
    A2.display();
}
