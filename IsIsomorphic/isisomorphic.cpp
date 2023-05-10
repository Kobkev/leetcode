#include <iostream>
#include <bits/stdc++.h>

bool isIsomorphic(std::string s, std::string t)
{
    std::unordered_map<char, std::vector<int>> StoT;
    std::unordered_map<char, std::vector<int>> TtoS;

    for (int i = 0; i < s.size(); i++)
    {
        StoT[s[i]].push_back(i);
        TtoS[t[i]].push_back(i);

        if (StoT[s[i]] != TtoS[t[i]])
            return false;
    }
    return true;
}

int main()
{
    char c;
    std::string s = "egg";
    std::string t = "mgg";

    if (isIsomorphic(s, t))
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }
    std::cin >> c;
}