#include <iostream>
// #include <conio.h>
using namespace std;

class Person
{
public:
    int id;
    void setId()
    {
        id = 100;
    }
    void getId()
    {
        cout << "Your ID : " << id << endl;
    }
};

class Student : public Person
{
public:
    void Test()
    {
        setId();
        getId();
    }
};

class Teacher : public Person
{
public:
    void Test()
    {
        setId();
        getId();
    }
};

class Doctor : public Person
{
public:
    void Test()
    {
        setId();
        getId();
    }
};

main()
{

    // getch();
    return 0;
}