#include <iostream>

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int count(int s)
{
	return fib(s + 1);
}

int main()
{
	int N;
	std::cin >> N;
	std::cout << count(N);
	return 0;
}
