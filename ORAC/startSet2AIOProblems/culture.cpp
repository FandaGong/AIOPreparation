// https://orac2.info/problem/982/
// culture
// bacteria doubles each day
// original bacteria was an odd number
// you know the amount of bacteria now
#include <iostream>

int main() {
  int n; // number of bacteria now
  int b;
  int d{0};
  // b - number of bacteria at beginning
  // d - number of days experiment been running
  std::cin >> n;

  while ((n >= 2) && (n % 2 == 0)) {
    n = n / 2;
    d += 1;
  }

  b = n;

  std::cout << b << " " << d << std::endl;
}