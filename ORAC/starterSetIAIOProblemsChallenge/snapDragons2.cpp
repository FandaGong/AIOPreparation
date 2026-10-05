// https://orac2.info/problem/23/
// Snap Dragons 2

#include <cmath>
#include <iostream>

int main() {
  int R, C, RR, CR, RS, CS;
  std::cin >> R >> C >> RR >> CR >> RS >> CS;

  if (std::abs(RR - RS + CR - CS) % 2 == 0) {
    std::cout << "SCARLET" << std::endl;
  } else {
    std::cout << "ROSE" << std::endl;
  }
}