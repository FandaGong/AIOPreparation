// https://orac2.info/problem/336/

#include <algorithm>
#include <cmath>
#include <iostream>

int main() {
  int x1;
  int y1;
  int x2;
  int y2;

  int x3;
  int y3;
  int x4;
  int y4;

  std::cin >> x1 >> y1;
  std::cin >> x2 >> y2;
  std::cin >> x3 >> y3;
  std::cin >> x4 >> y4;

  int left{std::min({x1, x2, x3, x4})};
  int right{std::max({x1, x2, x3, x4})};

  int bottom{std::min({y1, y2, y3, y4})};
  int top{std::max({y1, y2, y3, y4})};

  int Area1 = std::abs((y2 - y1) * (x2 - x1));
  int Area2 = std::abs((y4 - y3) * (x4 - x3));

  int overlapAreaW{std::max(0, x2 - x1 + x4 - x3 - (right - left))};
  int overlapAreaH{std::max(0, y2 - y1 + y4 - y3 - (top - bottom))};

  int totalArea = Area1 + Area2 - (overlapAreaH * overlapAreaW);

  std::cout << totalArea;
}