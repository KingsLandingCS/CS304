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

class Boy : public Student, Male
{
public:
    void BoyPrint()
    {
        cout << "I am Boy" << endl;
     }
};

class Girl : public Student, public Female
{
public:
    void GirlPrint()
    {
        cout << "I am Girl" << endl;
    }
};

int main()
{
    Girl G1;
    G1.print();
    Boy B1;
    B1.BoyPrint();

    return 0;
}