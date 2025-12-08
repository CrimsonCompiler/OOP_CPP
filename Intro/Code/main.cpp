// OOP intro
// Student is my Data type
// Object is my variable 

// how to access 

// We can use . to access the members of the class

#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;
        int roll;
        string grade;
};

int main(){
    Student s1;
    s1.name = "Tasrik";
    s1.age = 20;
    s1.roll = 1;
    s1.grade = "A";

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.roll << endl;
    cout << s1.grade << endl;


    Student s2;
    s2.name = "Tousif";
    s2.age = 21;
    s2.roll = 2;
    s2.grade = "B";

    cout << s2.name << endl;
    cout << s2.age << endl;
    cout << s2.roll << endl;
    cout << s2.grade << endl;

    return 0;
}


