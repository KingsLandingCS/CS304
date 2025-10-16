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
        name = s;
    }
    void setAge(int s)
    {
        age = s;
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
    void getGrade()
    {
        cout << grade << endl;
    }
};

int main()
{
    Student S1;

    S1.setName("Ali");
    S1.setAge(25);
    S1.setRollNumber(52);
    S1.setGrade("B");

    S1.getName();
    S1.getAge();
    S1.getRollNumber();
    S1.getGrade();
}