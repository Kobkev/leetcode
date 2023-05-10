#include <iostream>

bool isSubsequence(std::string s, std::string t)
{
    int i{0}, j{0};

    while (i < s.size() && j < t.size())
    {
        if (s[i] == t[j])
            i++;
        j++;
    }
    return i == s.size() ? true : false;
}

int main()
{
    char c{};
    std::string s{"abc"}, t{"ahbgdc"};

    isSubsequence(s, t) ? std::cout << "TRUE" : std::cout << "False";

    std::cin >> c;
}