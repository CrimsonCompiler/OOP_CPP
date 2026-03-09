// Constructor and Destructor Call order
#include <iostream>
using namespace std;

class Demo {
  string name;

public:
  Demo(string name) {
    this->name = name;
    cout << "Constructor called: " << name << endl;
  }
  ~Demo() { cout << "Destructor called: " << name << endl; }
};

int main() {
  Demo d1("1"), d2("2"), d3("3");
  Demo *d4 = new Demo("4");
  // Dynamic memory allocation
  delete d4;
  return 0;
}