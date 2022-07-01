#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

	std::vector<int> vector;
	size_t size;
	std::cin >> size;
	int size2 = size;
	int m;
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		std::cin >> m;
		vector.push_back(m);
	}

	std::sort(vector.begin(), vector.end());

	for (int i = 0; i < size / 3; ++i)
	{
		max = max + vector[size2 - 2];
		vector.pop_back();
		vector.pop_back();
		size2 -= 2;
	}
	std::cout << max;

	return 0;
}
