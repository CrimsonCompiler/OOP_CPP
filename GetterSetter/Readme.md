# Getter and Setter

A getter and setter is a way of accessing private members of a class. It can be either attribute or method. So we don't need to make the members public and security is maintained. 

# Example

```
class Student{
    public:
        string name;
        int age;
        int roll;
        string grade;
        
        void setName(string name){
            this->name = name;
        }

        string getName(){
            return name;
        }
};
```
## We can't access the private members of the class. So, we use getter and setter to access the private members of the class. 

```
