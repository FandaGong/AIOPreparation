// orac2.info/problem/1098/
// robot vacuum

#include <cmath>
#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int K; // n of instructions
  std::cin >> K;

  std::string instructions;
  std::cin >> instructions;

  int x = 0;
  int y = 0;

  for (int i = 0; i < K; i++) {
    char direction = instructions[i];
    if (direction == 'N') {
      y += 1;
    }
    if (direction == 'E') {
      x += 1;
    }
    if (direction == 'S') {
      y -= 1;
    }
    if (direction == 'W') {
      x -= 1;
    }
  }

  std::cout << std::abs(x) + std::abs(y);
}