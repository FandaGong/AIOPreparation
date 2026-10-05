// orac2.info/problem/175/
// cute numbers

#include <iostream>

int main() {
  int d; // number of digits
  std::cin >> d;

  int currentStreak = 0;

  int n;
  for (int i = 0; i < d; i++) {
    std::cin >> n;

    if (n == 0) {
      currentStreak++;
    } else {
      currentStreak = 0;
    }
  }

  std::cout << currentStreak;
}