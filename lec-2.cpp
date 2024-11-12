#include <iostream>
// #include <conio.h>
using namespace std;

void setA();
void getA();
void setA()
{
    a = 25;
};

class Student
{
private: // ===> data Hiding
    int a;

public:
    void setA()
    {
        a = 25;
    }
    void getA()
    {
        cout << a << endl;
    }
};

main()
{

    // getch();
    return 0;
}