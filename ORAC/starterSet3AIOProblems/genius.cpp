// orac2.info/problem/800/
// genius

#include <algorithm>
#include <iostream>
#include <vector>

int turns(int p) {
  int total = 0;
  int questions = 1;
  int turns = 1;

  while (total < p) {
    int total = questions + questions + 1;
    questions += 1;
    turns++;
  }
  turns++;
  return turns;
}

int main() {
  int n, p;
  // n is the number of people solving problems
  // p is the total number of problems
  std::cin >> n >> p;
  int totalTurns = turns(p);

  std::vector<int> people(n);
  for (int i = 0; i < n; i++) {
    int num = i + 1;
    for (int x = 0; x < ((totalTurns - (totalTurns % n)) / n); x++) {
      people[i] = num + num + n;
      num = people[i];
    }
    people[i] = num;
  }

  std::cout << *std::ranges::max_element(people) << std::ranges::max(people);
}