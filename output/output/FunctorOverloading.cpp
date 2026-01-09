#include <iostream>
using namespace std;

class Person
{
public:
    int value;
    Person(int v)
    {
        value = v;
    }

    int operator()(int x)
    {
        return value + x;
    }
};

int main()
{
    Person obj(12);
    cout << obj(3) << endl;
    return 0;
}