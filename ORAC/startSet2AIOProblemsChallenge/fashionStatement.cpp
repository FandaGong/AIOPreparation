// orac2.info/problem/121/

#include <iostream>

int main() {
  int t; // cost of taxi ride
  std::cin >> t;

  int N;
  int N100 = (t - t % 100) / 100;
  t = t - N100 * 100;
  int N20 = (t - t % 20) / 20;
  t = t - N20 * 20;
  int N5 = (t - t % 5) / 5;
  t = t - N5 * 5;
  int N1 = t;

  N = N100 + N20 + N5 + N1;
  std::cout << N << std::endl;
}