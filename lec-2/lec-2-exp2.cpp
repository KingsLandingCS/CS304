#include <iostream>
#include <string>
// #include <conio.h>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        if (a > 0)
        {
            age = a;
        }
        else
        {
            cout << "Invalid age!" << endl;
        }
    }

    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }
};

int main()
{
    Student student;
    student.setName("John Doe");
    student.setAge(20);

    cout << "Student Name: " << student.getName() << endl;
    cout << "Student Age: " << student.getAge() << endl;

    // getch();
    return 0;
}

// Explanation of Code:
// name and age are private attributes.
// setName() and setAge() methods allow controlled modification of these attributes.
// getName() and getAge() provide controlled access to the values.

// 2. Encapsulation
// Explanation:
// Encapsulation combines data (attributes) and methods (functions) that operate on that data into one unit called a class. By making data private and exposing only necessary methods, it enforces control over the data.
// Why Encapsulation?
// Protects data from external interference.
// Encourages modular code and reusability.