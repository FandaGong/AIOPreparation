// orac2.info/problem/309/
// ladybugs

#include <iostream>

int main() {
  int N; // number of ladybugs
  std::cin >> N;

  int num; // fence post index for ladybugs

  int sIndex = 1000000000;
  int lIndex = 0;

  for (int i = 0; i < N; i++) {
    std::cin >> num;
    if (sIndex > num) {
      sIndex = num;
    }
    if (lIndex < num) {
      lIndex = num;
    }
  }

  std::cout << lIndex - sIndex + 1;
}