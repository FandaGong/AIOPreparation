#include <iostream>
#include <unordered_map>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int d, w;
  if (!(std::cin >> d >> w))
    return 0;

  // Use a hash map for O(1) word lookup
  std::unordered_map<int, int> dictionary;
  for (int i = 0; i < d; i++) {
    int word1, word2;
    std::cin >> word1 >> word2;
    dictionary[word1] = word2;
  }

  for (int i = 0; i < w; i++) {
    int word;
    std::cin >> word;

    if (!dictionary.contains(word)) {
      std::cout << "C?" << std::endl;
    } else {
      std::cout << dictionary[word] << "\n";
    }
  }

  return 0;
}