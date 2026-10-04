// https://orac2.info/problem/3/
// vases

#include <iostream>

int main() {
  int N;
  std::cin >> N;

  int vase3 = N - 3;

  if (N >= 6) {
    std::cout << 1 << " " << 2 << " " << vase3 << "\n";
  } else {
    std::cout << 0 << " " << 0 << " " << 0;
  }
}