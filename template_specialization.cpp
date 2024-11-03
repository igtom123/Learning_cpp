#include <array>
#include <iostream>
using namespace std;

// this is the template we've made
void print_array(auto array) {
  for (auto value : array) {
    cout << value << " " << ' ';
  }
  cout << "\n";
}

// If we reach a case where the type is int, instead of doing what is defined
// above, we do this instead:

template <> void print_array(array<int, 3> array) {
  cout << "Printing from the specialization" << endl;
}

int main() {
  array<int, 3> my_int_array = {1, 2, 3};
  print_array(my_int_array);
  array<float, 3> my_float_array = {1.1f, 1.2f, 1.3f};
  print_array(my_float_array);
  return 0;
}

// when runningthis program use -std=c++20 or the compiler will use another
// version of c++ and bring up errors.
