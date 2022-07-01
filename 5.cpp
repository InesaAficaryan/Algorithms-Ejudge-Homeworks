#include <iostream>
#include <vector>
void generateParenthesis(int n, int open_count, int close_count, std::string& string, std::vector<std::string>& vector) {
	if (open_count == n && close_count == n) {
		vector.push_back(string);
		return;
	}

	if (open_count < n)
	{
		string.push_back('(');
		generateParenthesis(n, open_count + 1, close_count, string, vector);
		string.pop_back();
	}

	if (close_count < open_count)
	{
		string.push_back(')');
		generateParenthesis(n, open_count, close_count + 1, string, vector);
		string.pop_back();
	}
}

std::vector<std::string> generateParenthesis(int n)
{
	std::vector<std::string> vector;
	std::string string;
	string = "";
	generateParenthesis(n, 0, 0, string, vector);
	return vector;
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::string> string = generateParenthesis(n);

	for (int i = 0; i < string.size(); i++)
		std::cout << string[i] << std::endl;
	return 0;
}
