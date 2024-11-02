#include <cmath>
#include <iostream>
#include <string>
// #include <iostream>
// #include <ostream>
// #include <string>
// #include <vector>
//  using namespace std;

// enums are like structs
// in full they are called enumerations
// enumerations means specifically listed
// They are supposed to be permanent
// that's why it's advisable to write them in CAPS
enum Levels { LOW = 25, MEDIUM = 50, HIGH = 75 };

int main() {
  /*cout << "Hello world"
       << endl; // std::cout is used instead of adding a namespace of std
  std::cout << "I am learning cpp"
            << std::endl; // endl can be used as a new line instead of /n.
  // There are the primitive data types in cpp
  // e.g int, double, char, string, bool*/
  /*const double num = 10.3;
  int num2 = 5;
  char myChar = '&';
  bool day = true;
  string name = "Ian\n";
  int age = 20;
  // cout << num << num2 << myChar << day << name;

  // cout << "I am " << age << "years old\n";

  const int number= 20; //When declaring a const value it must be declared with
  a value.
  */

  // Calculating the area of a rectangle
  /*int length = 10, width = 20, area;
  area = length * width;
  cout << "The area is " << area << ".\n";
  */

  // accepting inputs
  /*int firstNum, secondNum;
  cout << "Enter the first value: ";
  cin >> firstNum;
  cout << "Enter the second value: ";
  cin >> secondNum;
  int sum = firstNum + secondNum;
  cout << "The sum is: " << sum << "\n";
  */
  /*
  char a = 101; // b = 66, c = 67;
  cout << a;    //<< b << c;
  */
  /*
  int a = 10, b = 11;
  cout << (a < b);*/

  // Strings
  //
  /*
  std::string firstName = "Ian", secondName = "Tom", fullName;
  fullName = firstName + " " + secondName;

  std::cout << fullName;
  std::cout << "The length of the string is: " << fullName.length()
            << "\n"; // The .size() function does the same thing.
  // You can print only the name of letter of a certain index in a string.
  std::cout << fullName[0] << "\n";
  // You can change the characters in a certain index in a String.
  fullName[2] = 'o';
  std::cout << fullName << "\n";
  // There is a function in strings called at() that shows the index at a given
  // index
  std::cout << fullName.at(2) << "\n";
  fullName.at(4) = 't';

  std::cout << "We are the so called \"Vikings\" from the North\n";
  std::string otherName;
  std::cout << "Enter your name :";
  // cin >> otherName; //cin<< takes a whitespace as a terminating characters,
  // That's why we use getline
  getline(std::cin, otherName);
  std::cout << "Other name is " << otherName << "\n";

  // C-string
  char names[] = "ian";
  std::cout << names;
  */

  // math in cpp
  // most of this funtions can be found in the <cmath> library
  /*
  std::cout << std::max(3, 5) << std::endl;
  std::cout << std::min(540, 902) << std::endl;
  std::cout << std::sqrt(10) << std::endl;
  std::cout << std::log(10) << std::endl;
  std::cout << round(2.6) << std::endl;
  */

  // Booleans
  //
  /*
  int myAge = 20;
  int votingAge = 25;

  if (votingAge <= myAge)
    std::cout << "You can vote";
  else
    std::cout << "Not old enough to vote";
  */

  // If____else
  /*
  if (20 < 30) {
    std::cout << "I am older than youtube" << std::endl;
  }

  int time = 20;
  if (time < 15) {
    std::cout << "it's afternoon" << std::endl;
  } else {
    std::cout << "It's evening" << std::endl;
  }
  // All the above time code can be reduced to the following shorthand
  // if___else.

  int times = 22;
  std::string result = (time < 20) ? "Good day" : "Good evening";
  std::cout << result << std::endl;
  // To check if a number is even or a odd

  int num = 11;
  std::string results = (num % 2) ? "The number is odd" : "The number is even";
  std::cout << results << std::endl;
  */
  /*
  // Switch statement
  int day = 4;
  switch (day) {
  case 1:
    std::cout << "Monday" << std::endl;
    break;

  case 2:
    std::cout << "Tuesday" << std::endl;
    break;

  case 3:
    std::cout << "Wednesday" << std::endl;
    break;

  case 4:
    std::cout << "Thursday" << std::endl;
    break;

  case 5:
    std::cout << "Friday" << std::endl;
    break;

  case 6:
    std::cout << "Sartuday" << std::endl;
    break;

  case 7:
    std::cout << "Sunday" << std::endl;
    break;

  default:
    std::cout << "This is not a day." << std::endl;
  }
  */
  /*
  // do____while
  int i = 0;
  while (i < 5) {
    std::cout << i << std::endl;
    i++;
  }

  // do____while
  int h;
  do {
    std::cout << h << std::endl;
    h++;
  } while (i < 5);
  */

  // for____loop
  /*
  for (int i = 1; i <= 5; ++i) {
    std::cout << i;

    for (int j = 1; j <= 10; ++j) {
      std::cout << j << std::endl;
    }
  }
  */

  // break & continue
  /*
  for (int i = 0; i < 10; i++) {
    if (i == 6)
      break;
    std::cout << i << std::endl;
  }

  for (int i = 10; i < 20; i++) {
    if (i == 15)
      continue;
    std::cout << i << std::endl;
  }
  */
  /*
  // Arrays
  std::string cars[5] = {"Volvo", "BMW", "Mercedes", "Mazda", "Ford"};
  int size = sizeof(cars) / sizeof(cars[0]);//this part is essential in the
  sizeof() function. for (int i = 0; i < size; i++) { std::cout << cars[i] <<
  std::endl;
  }

  // foreach____loop

  for (std::string car : cars) {
    std::cout << car << std::endl;
  }
  */

  // vectors
  // for operations that require adding or removing of elements, vectors are
  // used.
  /*
  std::vector<std::string> carings = {"volvo", "tesla", "toyota"};
  carings.push_back("BMW");

  for (std::string caring : carings) {
    std::cout << caring << std::endl;
  }
  // to get the size of an array, we can use sizeof() function.
  std::cout << sizeof(carings) << std::endl;
  // it returns 24 because the sizeof() function returns the number of bytes and
  // not the number of strings.
  */

  // Battleship game exaxple.
  // we use 1 to show that there is a ship.
  /*
  bool ships[4][4] = {{0, 1, 1, 0}, {0, 0, 0, 0}, {0, 0, 1, 0}, {0, 0, 1, 0}};
  // Take note of the hits the player has taken and how many times they have
  // played this variables.
  int hits = 0;
  int numberOfTurns = 0;
  while (hits < 4) {
    int row, column;

    std::cout << "Selecting co-ordinates" << std::endl;

    std::cout << "Choose a row number between 0-3" << std::endl;
    std::cin >> row;

    std::cout << "Choose a colunmnumber between 0-3." << std::endl;
    std::cin >> column;

    if (ships[row][column]) {
      ships[row][column] = 0;

      hits++;
      std::cout << "hit!" << (4 - hits) << " left\n" << std::endl;

    } else {
      std::cout << "Miss!" << std::endl;
    }
    numberOfTurns++;
  }
  std::cout << "Victory!" << std::endl;
  std::cout << "You won in: " << numberOfTurns << "turns!" << std::endl;
  */
  /*
  // structs

  struct {
    int myNum;
    std::string name;

  } myStruct;

  myStruct.myNum = 10;
  myStruct.name = "Ian";
  std::cout << "name: " << myStruct.name << std::endl;

  // named structs act as data types
  struct variable {
    int age;
    std::string name;
  };

  variable employee;
  employee.name = "Ian";
  employee.age = 20;

  std::cout << "Name: " << employee.name << std::endl;
  std::cout << "Age: " << employee.age << std::endl;

  */
  /*
  // enums
  // calling enums
  // they are mostly used in constants and numbers that you know are not going
  to change e.g days, months, years etc.

  enum Levels myVar = MEDIUM;
  std::cout << myVar << std::endl;
  */
  /*
  // references

  std::string food = "pizza";
  std::string &meal = food;

  std::cout << meal << std::endl;
  // memory address.

  std::string name = "Ian";
  std::cout << &name << std::endl;

  */

  // Pointers

  // a pointer is a variable that points to a memory address.
  std::string food = "Pizza";
  std::string *ptr = &food;

  std::cout << food << std::endl;
  std::cout << &food << std::endl; // reference to the location
  std::cout << ptr << std::endl; // variable with the location of the variable.

  // pointer dereferencing
  std::cout << *ptr << std::endl; // Prints what is stored in the ptr location.

  return 0;
}
