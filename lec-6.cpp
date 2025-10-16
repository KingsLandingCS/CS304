#include <iostream>

using namespace std;

class Student
{
private:
    string name, grade;
    int age, roll_number;

    // Function Getter and Setter

public:
    void setName(string s)
    {
        if (s.size() == 0)
        {
            cout << "Invalid name";
            return;
        }
        else
        {
            name = s;
        }
    }

    void setAge(int s)
    {
        if (s < 0 || s > 100)
        {
            cout << "invalid age";
            return;
        }
        else
        {
            age = s;
        }
    }
    void setRollNumber(int s)
    {
        roll_number = s;
    }
    void setGrade(string s)
    {
        grade = s;
    }

    void getName()
    {
        cout << name << endl;
    }
    void getAge()
    {
        cout << age << endl;
    }
    void getRollNumber()
    {
        cout << roll_number << endl;
    }
    string getGrade(int pin)
    {
        if (pin == 123)
        {
            cout << grade << endl;
        }
        else
        {
            return " ";
        }
    }
};

int main()
{
    Student S1;

    S1.setName("Ali");
    S1.setAge(23);
    S1.setRollNumber(52);
    S1.setGrade("B");

    S1.getName();
    S1.getAge();
    S1.getRollNumber();
    S1.getGrade(123);
}