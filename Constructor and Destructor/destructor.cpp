#include <iostream>
using namespace std;

class Customer {
  string username;
  int *balance;

public:
  Customer(string username, int bal) {
    this->username = username;
    balance = new int;
    *balance = bal;
  }

  ~Customer() {
    delete balance;
    cout << "Destructor called" << endl;
  }
};

int main() { Customer A1("Rahim", 1000); }