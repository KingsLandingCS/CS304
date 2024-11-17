#include <iostream>
// #include <conio.h>
using namespace std;

class Women
{
public:
    void walk()
    {
        cout << "Walk Function";
    }
};

class Fish
{
    void swim()
    {
        cout << "swim Function";
    }
};

class Mermaid : public Women, public Fish
{
};

main()
{

    // getch();
    return 0;
}