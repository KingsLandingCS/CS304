#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age, rollNumber;
    string grade;
};

int main()
{
    Student *S = new Student;
    (*S).name = "Rohit";
    (*S).age = 21;
    (*S).rollNumber = 55;
    (*S).grade = "A+";

    cout << S->name << endl;
    cout << S->age << endl;
    cout << S->rollNumber << endl;
    cout << S->grade << endl;
}