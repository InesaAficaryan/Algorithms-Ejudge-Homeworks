#include <iostream>
#include <vector>

int maxSum(std::vector<int> price, int n)
{
    if (n == 1)
        return 0;

    int maxProfit = 0;
    int sell;
    int buy;
    int i = 0;
    while (i < n - 1)
    {
        while ((i < n - 1) &&
            (price[i + 1] <= price[i]))
            i++;
        if (i == n - 1)
            break;
        buy = i++;
        while ((i < n) && (price[i] >= price[i - 1]))
            i++;

        sell = i - 1; 
        maxProfit += price[sell] - price[buy];
   
    }

    return maxProfit;
}
int main()
{
	std::vector<int> price;
	int n;
	std::cin >> n;
	int m;
	for (int i = 0; i < n; i++) {
		std::cin >> m;
		price.push_back(m);
	}

	std::cout << maxSum(price, n);
	return 0;
}
