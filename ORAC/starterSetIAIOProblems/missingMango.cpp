// https://orac2.info/problem/204/
// missing mango

#include <iostream>
#include <unordered_map>

int main() {
  int Ix, Cx, Id, Cd;
  int x;
  std::cin >> Ix >> Cx >> Id >> Cd;

  std::unordered_map<int, int> counts;

  counts[Ix + Id]++;
  counts[Ix - Id]++;
  counts[Cx + Cd]++;
  counts[Cx - Cd]++;

  int max = 0;

  for (const auto &[num, count] : counts) {
    if (count > max) {
      max = count;
      x = num;
    }
  }

  std::cout << x << "\n";
}