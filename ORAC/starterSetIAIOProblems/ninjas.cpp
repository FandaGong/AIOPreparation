// orac2.info/problem/212/

#include <iostream>

int main() {
  int N; // ninjas trying to get inside
  int K; // cooldown
  std::cin >> N >> K;

  int catched{static_cast<int>(((N - 1) / (K + 1)) + 1)};
  int noCatch{N - catched};

  if (N == 0) {
    noCatch = 0;
  }

  std::cout << noCatch << std::endl;
}