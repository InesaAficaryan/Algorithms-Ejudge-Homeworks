#include <iostream>

void Print(std::string str, int index)
{
    if (index == str.size()) {
        std::cout << str << std::endl;
        return;
    }

    if (str[index] == '?')
    {
        str[index] = '0';
        Print(str, index + 1);

        str[index] = '1';
        Print(str, index + 1);
    }
    else
        Print(str, index + 1);
}



int main()
{
    std::string str;
    std::cin >> str;
    Print(str, 0);
}
