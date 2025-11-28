#include <iostream>
using namespace std;

class Human
{
    
    string name;
    int age, weight;
};

class Student : public Human
{
    int rollNumber, fees;
};

int main()
{
    Student A;

    return 0;
}