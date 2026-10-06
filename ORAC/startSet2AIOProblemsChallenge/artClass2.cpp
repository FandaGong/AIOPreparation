// orac2.info/problem/1099/
// art class 2

#include <iostream>

int main() {
  int N; // number of holes
  std::cin >> N;

  int x, y;

  int smallx = 10000;
  int smally = 10000;

  int bigx = 0;
  int bigy = 0;
  for (int i = 0; i < N; i++) {
    std::cin >> x >> y;
    if (smallx >= x) {
      smallx = x;
    }
    if (smally >= y) {
      smally = y;
    }

    if (bigx <= x) {
      bigx = x;
    }
    if (bigy <= y) {
      bigy = y;
    }
  }

  std::cout << (bigy - smally) * (bigx - smallx) << std::endl;
}