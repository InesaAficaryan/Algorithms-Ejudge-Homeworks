#include <iostream>
#include <vector>
#include <algorithm>

void addElements(std::vector<int> &arr, int m, std::vector<std::vector<int>> &results, std::vector<int> &res,  int index) {
	if (m == 0)
	{
		results.push_back(res);
		return;
	}

	while (index < arr.size() && m - arr[index] >= 0) {
		res.push_back(arr[index]);
		addElements(arr, m - arr[index], results, res, index);
		index++;
		res.pop_back();
	}
}

std::vector<std::vector<int>> sum(std::vector<int> arr, int m) {
	std::sort(arr.begin(), arr.end());
	arr.erase(std::unique(arr.begin(), arr.end()), arr.end());
	std::vector<int> res;
	std::vector<std::vector<int>> results;
	addElements(arr, m, results, res, 0);

	return results;
}

int main() {
	std::vector<int> arr;
	int n;
	std::cin >> n;
	int k;
	for (int i = 0; i < n; i++) {
		std::cin >> k;
		arr.push_back(k);
	}
	int m;
	std::cin >> m;
	std::vector<std::vector<int>> results = sum(arr, m);

	if (results.size() == 0) {
		std::cout << "Empty";
		return 0;
	}
	int g;
	for (int i = 0; i < results.size(); i++) {
		if (results[i].size() > 0) {
			std::cout << "(";
			g = 1;
			for (int j = 0; j < results[i].size(); j++){
				std::cout << results[i][j];
			    if (g < results[i].size()) {
				   std::cout << " ";
				   g++;
			    }
		    }
			std::cout << ")";
		}
	}

	return 0;
}
