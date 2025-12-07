#include <iostream>
using namespace std;

class Human
{
public:
    string name;

    void display()
    {
        cout << "My name is " << name << endl;
    }
};

class Engineer : public virtual Human
{

public:
    string specilization;

    void work()
    {
        cout << " I have Specilization in " << specilization << endl;
    }
};

class Youtuber : public virtual Human
{
public:
    int subscribers;
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
    int salary;

    CodeTeacher()
    {
    }

    CodeTeacher(string name, string specilization, int subscribers, int salary)
    {
        this->name = name;
        this->specilization = specilization;
        this->subscribers = subscribers;
        this->salary = salary;
    }
};

int main()
{
    CodeTeacher A1("Zubi", "AutoMata", 10000, 50000);
    A1.display();

    return 0;
}
