#include <algorithm>
#include <iostream>
using namespace std;

template <class myType> myType square(myType value) {
  myType result = value * value;
  return result;
}
// abbreviated function template
// auto square2(auto input) { return input * input; };

template <typename T> bool equal(T a, T b) { return a == b; };
template <> bool equal<float>(float a, float b) {
  cout << "Equal float" << endl;
  return a == b;
}
int main() {
  //  cout << square<int>(10) << endl;
  //  cout << square<float>(5.0) << endl;
  //  cout << square<long>(94203) << endl;
  //  cout << square<double>(5.52324) << endl;
  // cout << square2(4.9) << endl;
  cout << equal<int>(10, 10) << endl;
  cout << equal<float>(1.001f, 1.000 + 0.001) << endl;
  return 0;
}
