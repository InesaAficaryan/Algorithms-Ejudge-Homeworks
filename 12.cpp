#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>


int rob(std::vector<int> house)
{
    int max = 0;
    if (house.size() == 0)
        return 0;
    else if (house.size() == 1)
        return house[0];

    house[1] = std::max(house[0], house[1]);
    if (house.size() == 2)
        return house[1];

    for (int i = 2; i < house.size(); ++i)
    {
        house[i] = std::max(house[i] + house[i - 2], house[i - 1]);
        max = house[i];
    }
    return max;
}


int main()
{
    std::vector<int> arr;
    int n;
    std::cin >> n;
    int m;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> m;
        arr.push_back(m);
    }
    std::cout << rob(arr);
}
