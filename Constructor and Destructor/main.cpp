#include <bits/stdc++.h>
using namespace std;

class Customer {
  string name;
  int accountNumber;
  int balance;

public:
  Customer() {
    // Can't be seen but automatically written by default constructor
    cout << "Default constructor called" << endl;
  }

  // Parameterized constructor
  Customer(string name, int accountNumber, int balance) {
    this->name = name;
    this->accountNumber = accountNumber;
    this->balance = balance;
  }

  Customer(Customer &A) {
    this->name = A.name;
    this->accountNumber = A.accountNumber;
    this->balance = A.balance;
  }

  void display() {
    cout << this->name << " " << this->accountNumber << " " << this->balance
         << endl;
  }
};

int main() {
  Customer A1;
  Customer B1("Tousif", 45679, 10000);
  B1.display();

  Customer A2(A1);
}

// Constructor dosen't have any return type
// By default constructor is private
// This is a pointer to the current object
// this->name = name;