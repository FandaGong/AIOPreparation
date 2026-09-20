#include <iostream>
#include <vector>

int main() {

  std::vector<int> list;
  int n;
  int lines;
  std::cin >> lines;
  int total{0};
  for (int i = 0; i < lines; ++i) {
    std::cin >> n;

    if (n % 3 == 0) {
      total++;
      list.push_back(i + 1);
    }
  }

  if (total == 0) {
    std::cout << "Nothing here!";
  } else {
    std::cout << total << "\n";
    for (int i = 0; i < list.size(); ++i) {
      std::cout << list[i] << " ";
    }
  }
}