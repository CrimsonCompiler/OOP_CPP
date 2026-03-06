#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    int age;
    int marks;
};

int main()
{
    Student *s = new Student;
    (*s).roll = 1;
    (*s).name = "John";
    (*s).age = 20;
    (*s).marks = 90;    

    cout << (*s).roll << endl;
    cout << (*s).name << endl;
    cout << (*s).age << endl;
    cout << (*s).marks << endl;
    
}

