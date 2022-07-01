#include <iostream>
#include <vector>

int main()
{
	int n;
	int m;
	std::vector<int> arr;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> m;
		arr.push_back(m);
	}
	int single = arr[0];

	for (int i = 1; i < arr.size(); ++i)
	{
		single = single ^ arr[i];
	}
	std::cout << single;

}


