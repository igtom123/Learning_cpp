#include <iostream>
using namespace std;

template <typename T> class MyClass {
public:
  void text() { cout << "Generic class\n"; }
};
template <> class MyClass<double> {
public:
  void text() { cout << "Reached the double datatype\n"; }
};

int main() {
  MyClass<int> intObject;
  intObject.text();

  MyClass<float> floatObject;
  floatObject.text();

  MyClass<double> doubleObject;
  doubleObject.text();
  return 0;
}
