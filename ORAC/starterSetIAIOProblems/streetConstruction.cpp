// https://orac2.info/problem/265/

#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N; // chunks of land
  int K; // number of parks
  std::cin >> N >> K;

  // Distribute N chunks as evenly as possible across (K + 1) slots
  int minHouse = N / (K + 1);

  std::cout << minHouse << "\n";

  return 0;
}