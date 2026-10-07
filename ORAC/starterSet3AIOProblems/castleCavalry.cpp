// orac2.info/problem/321/
// castle cavalry 7/10/26

#include <iostream>
#include <unordered_map>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N; // number of knights
  std::cin >> N;

  std::unordered_map<int, int> squad;
  int x;
  for (int i = 0; i < N; i++) {
    std::cin >> x;
    squad[x]++;
  }

  bool allMatched = true;

  for (const auto &[squadNumNeeded, squadNumWanted] : squad) {
    if (!(squadNumWanted % squadNumNeeded == 0)) {
      allMatched = false;
      break;
    }
  }

  if (allMatched) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }
}