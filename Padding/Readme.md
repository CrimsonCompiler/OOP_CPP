# What is Padding ?

Padding is the space between the data members of a class. It is the space between the data members of a class. Padding is added to the size of the class to make the size of the class a multiple of the size of the largest data member. Padding makes our program to use more memory than it needs. We need to know how padding works to optimize our program.

Example:

```cpp
class Student{
    public:
        int roll;
        char grade;
        int age;
        int marks;
};
```

Size of int is 4 bytes and size of char is 1 byte. So, the size of the class is 4 + 1 + 4 + 4 = 13 bytes. But the size of the class is 16 bytes. So, the padding is 3 bytes.

## But why there is a gap ?
- 1 byte = 1 memory location
- 2 byte = 2 memory location
- 4 byte = 4 memory location
- 8 byte = 8 memory location

We only use or can place the values in the memory location that is a multiple of the size of the data member. 

Example
```cpp
class Student{
    public:
        int roll;
        char grade;
        int age;
        int marks;
};
```
- roll is taking = 4 memory location
- grade is taking = 1 memory location
- age is taking = 4 memory location
- marks is taking = 4 memory location

Now if we look closely
```
0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15
r  r  r  r  g  p  p  p  a  a  a  a  a  a  a  a
```
Total size = 16 bytes


# Another Example

```cpp
class Student{
    public:
        int roll;
        char grade;
        int marks;
        char *name;
        double gpa;
};
```

- roll is taking = 4 memory location
- grade is taking = 1 memory location
- marks is taking = 4 memory location
- name is taking = 8 memory location
- gpa is taking = 8 memory location

Now if we look closely

```
0   1   2   3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31
r   r   r  r   g  p  p  p  m  m  m  m  n  n  n  n  n  n  n  n  p  p  p  p  gp gp gp gp gp gp gp gp
```

Total size = 32 bytes
