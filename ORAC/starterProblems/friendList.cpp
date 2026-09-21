#include <iostream>
#include <vector>

int main() {
  // Optimise standard I/O operations for competitive programming performance
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int f;
  if (!(std::cin >> f))
    return 0;

  // Since player IDs are bounded between 0 and 1000,
  // a fixed-size vector is faster than a hash map.
  std::vector<int> friend_counts(1001, 0);

  // Read all friendships
  for (int i = 0; i < f; ++i) {
    int a, b;
    std::cin >> a >> b;
    friend_counts[a]++;
    friend_counts[b]++;
  }

  // Find the maximum number of friends any player has
  int max_friends = 0;
  for (int count : friend_counts) {
    if (count > max_friends) {
      max_friends = count;
    }
  }

  // Print all player IDs with the maximum friend count in ascending order
  for (int id = 0; id <= 1000; ++id) {
    if (friend_counts[id] == max_friends && max_friends > 0) {
      std::cout << id << "\n";
    }
  }

  return 0;
}