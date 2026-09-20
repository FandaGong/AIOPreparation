#include <iostream>
#include <unordered_map>

int main() {
  int f;
  std::cin >> f;

  int a;
  int b;

  std::unordered_map<int, int> ab;
  for (int i = 0; i < f; i++) {
    std::cin >> a >> b;
    ab.insert({a, b});
  }
}