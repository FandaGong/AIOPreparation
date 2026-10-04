// https://orac2.info/problem/262/

#include <algorithm>
#include <iostream>

int main() {
  int x{};
  int y{};
  int L{};
  std::cin >> L >> x >> y;
  int a{x + y};
  int b{L - x + L - y};

  int result = std::min(a, b);
  std::cout << result << std::endl;

  return 0;
}