#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>


std::vector<std::vector<int>> generate(std::vector<int>& subset, int i, std::vector<int>& nums, std::vector<std::vector<int>>& subsets)
{
	if (i == nums.size())
	{
		subsets.push_back(subset);
		return subsets;
	}
	// ith element not in subset
	generate(subset, i + 1, nums, subsets);

	// ith element in subset
	subset.push_back(nums[i]);
	generate(subset, i + 1, nums, subsets);
	subset.pop_back();

	return subsets;
}


int main()
{
	int m;
	std::vector<int> arr;
	while (std::cin.peek() != '\n')
	{
		std::cin >> m;
		arr.push_back(m);
	}
	std::vector<int> empty;
	std::vector<std::vector<int>> subsets;
	std::sort(arr.begin(), arr.end());
	generate(empty, 0, arr, subsets);
	std::sort(subsets.begin(), subsets.end());
	for (auto subset : subsets)
	{
		for (auto ele : subset)
		{
			std::cout << ele << " ";
		}
		std::cout << std::endl;
	}
}
