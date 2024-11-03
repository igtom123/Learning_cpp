#include <iostream>
#include <string>
using namespace std;
/*
// base class
class Vehicle {
public:
  string brand = "Ford";
  void honk() { cout << "Tuuh! tuh!" << endl; }
};

// derived class
class Car : public Vehicle {
public:
  string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand << " " << myCar.model << endl;
  return 0;
}
*/

// multilevel inheritance
class MyClass {
public:
  void text() { cout << "some content in the parent class" << endl; }
};

class Child : public MyClass {
public:
  void childFunc() { cout << "Some content from the child class" << endl; }
};

class GrandChild : public Child {
public:
  void grandChildFunc() {
    cout << "Some function from the grand child" << endl;
  }
};

class Daughter {
public:
  void myDaughter() { cout << "This is my daughter" << endl; }
};

class GrandSon {
public:
  void grandSon() { cout << "This is my grand son." << endl; }
};

class FullyExtended : public GrandSon, public Daughter, public GrandChild {};

int main() {
  /*
  GrandChild newGrandChild;
  newGrandChild.grandChildFunc();
  newGrandChild.childFunc();
  newGrandChild.text();
  */

  FullyExtended ext;
  ext.myDaughter();
  ext.grandChildFunc();
  ext.grandSon();
  return 0;
}
