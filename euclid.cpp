/*
Euclidean Algorithm

Euclid created an algorithm that could find the greatest common divisor of any two numbers.
*/

#include <iostream>
using namespace std;

int euclid(int input1, int input2) {
  int gcd = 1;

  while (input1 != input2) {
    if (input1 > input2) {
      input1 -= input2;
    } else {
      input2 -= input1;
    }
  }
  return input1;
}

int main() {
  cout << "Euclid function call" << endl;
  cout << "Please enter in two numbers" << endl;
  int a = 0;
  int b = 0;
  cin >> a >> b;
  int result = euclid(a, b);
  cout << result << endl;
  return 0;
}
