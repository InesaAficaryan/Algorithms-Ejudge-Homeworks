#include <iostream>

void Pattern(int n, int m, bool flag)
{
    std::cout << m << " "; 

    if (flag == false && n == m)
        return;
    if (flag)
    {
        if (m - 5 > 0)
            Pattern(n, m - 5, true);
        else
            Pattern(n, m - 5, false);
    }

    else
        Pattern(n, m + 5, false);
}

int main()
{
    int n;
    std::cin >> n;
    Pattern(n, n, true);
}

