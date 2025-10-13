#include <iostream>
using namespace std;

class Woman
{
public:
    void walk()
    {
        cout << "walk Function" << endl;
    }
};

class Fish
{
public:
    void swim()
    {
        cout << "swim Function" << endl;
    }
};

class Mermaid : public Woman, public Fish
{
public:
    // void callFun()
    // {

    // }
};

int main()
{
    Mermaid M;

    M.walk();
    M.swim();

    return 0;
}