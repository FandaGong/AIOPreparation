//https://orac2.info/problem/328/
//input
//number of data \ data points
//output
//minimum maximum mean

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n {};
    std::vector<int> list;
    if(!(std::cin >> n)) { return 0;}
    list.reserve(n);
    int i {};
    for (int count = 0; count < n && std::cin >> i; ++count)
    {
        list.push_back(i);
    }

    auto min = *std::min_element(list.begin(), list.end());
    auto max = *std::max_element(list.begin(), list.end());
    int sum = std::accumulate(list.begin(), list.end(), 0);
    int avg = sum / list.size();

    std::cout << min << " " << max << " " << avg;

    return 0;
}
