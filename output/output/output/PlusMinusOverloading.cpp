#include <iostream>
using namespace std;

class Person
{
public:
    int value;

    Person()
    {
        value = 0;
    }

    Person(int v)
    {
        value = v;
    }

    Person operator++()
    {
        Person p;
        p.value = ++value;
        return p;
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Person obj(12);
    ++obj;
    obj.display();
    return 0;
}