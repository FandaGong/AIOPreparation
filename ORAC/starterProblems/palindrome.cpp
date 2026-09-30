// https://orac2.info/problem/1415/

#include <algorithm>
#include <iostream>
#include <string>

int main() {
  int f;
  std::cin >> f;

  std::string word;
  std::cin >> word;

  for (int i = 0; i < f / 2; i++) {
    int start{i};
    int end{f - 1 - i};

    if (word[start] != word[end]) {
      char letter = std::min(word[start], word[end]);
      word[start] = letter;
      word[end] = letter;
    }
  }

  std::cout << word << "\n";

  return 0;
}