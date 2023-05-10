#include <iostream>

int longestPalindrome(std::string s)
{
    for (auto i : s)
    {
        tolower(i);
    }

    std::cout << s;
}