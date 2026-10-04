// https://orac2.info/problem/303/
// NORT

#include <iostream>

int main() {
  int W, H;
  std::cin >> W >> H;

  int answer;

  if ((W % 2 == 0) || (H % 2 == 0)) {
    answer = W * H;
  } else {
    answer = W * H - 1;
  }

  std::cout << answer << "\n";

  return 0;
}