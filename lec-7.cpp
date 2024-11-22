#include <iostream>
// #include <conio.h>
using namespace std;

class Student
{
private: // within the class
    int a;

protected: // within the class and child classes
    int b;

public: // global
    int c;
};

struct Student
{
};

main()
{
    Student obj;
    obj.c;
    // getch();
    return 0;
}