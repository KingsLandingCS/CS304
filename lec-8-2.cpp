#include <iostream>
// #include <conio.h>
using namespace std;

class Student
{
private:
    int a;
    String b;

public:
    Student()
    {
        a = 50;
        b = "Khizar";
    }
    Student(int arg1, string arg2)
    {
        a = arg1;
        b = arg2;
    }
};

main()
{
    Student s1;
    Student s2 = s1;

    // getch();
    return 0;
};