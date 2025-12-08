# Access Modifier

What is access modifier ?

Access modifier is a keyword that is used to define the access level of a class member.

There are three access modifiers in C++:

1. public
2. private
3. protected


# Public 

Public members are accessible from any part of the program. Outside of the class we can access the public members it can be like attributes and methods.

Example:
```
Class Student{
    public:
        string name;
        int age;
        int roll;
        string grade;
}

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

    return 0;
}
```
    

# Private

Private members are not accessible from outside of the class. They are only accessible from inside the class. We cannot access the attributes or methods of a private member from outside the class. In c++ by default all members are private.

Example:

```
Class Student{
    private:
        string name;
        int age;
        int roll;
        string grade;
}
```
### We cannot access private members from outside the class.

```
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

    return 0;
}
```
# Protected
Protected members are similar to private members, but they can be accessed from derived classes. Protected members are not accessible from outside the class. They are only accessible from inside the class and derived classes.

Example:

```
class Student{
    protected:
        string name;
        int age;
        int roll;
        string grade;
}
```
### We cannot access protected members from outside the class.

```
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

    return 0;
}
```