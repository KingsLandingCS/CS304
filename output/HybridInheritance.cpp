#include <iostream>
using namespace std;

class Student
{
public:
    void print()
    {
        cout << "I am student" << endl;
    }
};

class Boy : public Student
{
public:
    void BoyPrint()
    {
        cout << "I am Boy" << endl;
    }
};

class Girl : public Student
{
public:
    void GirlPrint()
    {
        cout << "I am Girl" << endl;
    }
};

class Male
{
public:
    void MalePrint()
    {
        cout << "I am Male" << endl;
    }
};

class Female
{
public:
    void FemalePrint()
    {
        cout << "I am Male" << endl;
    }
};

int main()
{

    return 0;
}