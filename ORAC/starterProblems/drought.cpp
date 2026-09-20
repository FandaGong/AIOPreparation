#include <iostream>

int main() {
  int n; // number of days
  if (!(std::cin >> n)) {
    return 0;
  };
  int c; // capacity
  if (!(std::cin >> c)) {
    return 0;
  };

  int total{0};
  int nDays = -1; // number of days until full
  for (int i = 0; i < n; ++i) {
    int dailyInput;
    std::cin >> dailyInput;

    total += dailyInput;
    if (total >= c && nDays == -1) {
      nDays = i + 1;
    }
  }

  if (nDays != -1) {
    std::cout << nDays << std::endl;
  } else {
    std::cout << "-1" << std::endl;
  }

  return 0;
}
