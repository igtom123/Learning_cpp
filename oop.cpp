#include <algorithm>
#include <iostream>
#include <string>
class MyClass {
public:
  int num;
  std::string myString;
};

int main() {
  MyClass myClass;
  myClass.num = 10;
  myClass.myString = "Class string";

  std::cout << myClass.myString << myClass.num << std::endl;
}
