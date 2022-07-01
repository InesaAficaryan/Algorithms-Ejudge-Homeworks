#include <iostream>
#include <vector>

int maxSum(std::vector<int> price, int start, int end) {
	if (end <= start)
		return 0;

	int maxProfit = 0;
	int currentProfit;
	for (int i = start; i < end; i++) {
		for (int j = i + 1; j <= end; j++) {
			if (price[j] > price[i]) {
				currentProfit = price[j] - price[i];
				maxProfit = std::max(maxProfit, currentProfit);
			}
			
		}
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

	std::cout << maxSum(price, 0, n - 1);
	return 0;
}
