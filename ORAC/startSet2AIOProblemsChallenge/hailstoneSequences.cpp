#include <iostream>

int hailstone(int x) {
  if (x % 2 == 0) {
    return x / 2;
  } else {
    return 3 * x + 1;
  }
}

int main() {
  // Fast I/O configuration for competitive programming
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x;

  // Safely reads numbers until EOF or until a 0 is read
  while (std::cin >> x && x != 0) {
    int count = 0;

    while (x != 1) {
      x = hailstone(x);
      count++;
    }

    std::cout << count << "\n";
  }

  return 0;
}
