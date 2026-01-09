#include <iostream>
using namespace std;
class Person
{
public:
    int arr[2];

    Person(int x = 0, int y = 0)
    {
        arr[0] = x;
        arr[1] = y;
    }

    // int &operator[](int index)
    // {
    //     return arr[index];
    // }

    void display()
    {
        cout << arr[0] << endl;
        cout << arr[1] << endl;
    }
};

int main()
{
    Person obj(40, 50);
    obj.display();
    obj.arr[0] = 400;
    obj.arr[1] = 500;
    obj.display();

    return 0;
}