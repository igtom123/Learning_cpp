#include <cmath>
#include <iostream>
#include <ostream>
#include <string>
// using namespace std;
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

  for (int i = 1; i <= 5; ++i) {
    std::cout << i;

    for (int j = 1; j <= 10; ++j) {
      std::cout << j << std::endl;
    }
  }

  return 0;
}
