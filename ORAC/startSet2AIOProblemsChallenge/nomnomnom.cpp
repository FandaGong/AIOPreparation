// orac2.info/problem/39/
// nomnomnom

#include <iostream>
#include <vector>

int main() {

  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N; // number of dishes
  std::cin >> N;

  std::vector<int> dishes(N);

  for (int i = 0; i < N; i++) {
    std::cin >> dishes[i];
  }

  int leadCount = dishes[0];
  int fullHippos = 1;

  int kg = 0;

  for (int i = 1; i < N; i++) {
    kg += dishes[i];

    if (kg >= leadCount) {
      fullHippos++;
      leadCount = kg;
      kg = 0;
    }
  }

  std::cout << fullHippos << "\n";
  return 0;
}