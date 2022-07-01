#include <iostream>
#include <cstring>

bool Sequence(std::string str1, std::string str2, int n, int m)
{
    if (n == 0)
        return true;
    if (m == 0)
        return false;

    
    if (str1[n - 1] == str2[m - 1])
        return Sequence(str1, str2, n - 1, m - 1);

    return Sequence(str1, str2, n, m - 1);
}


int main()
{
	std::string str1;
	std::string str2;
   

	std::cin >> str1;
	std::cin >> str2;
    if (Sequence(str1, str2, str1.size(), str2.size()))
        std::cout << "YES";
    else {
        std::cout << "NO";
    }

    return 0;
}
