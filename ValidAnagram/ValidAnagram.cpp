#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// bool isAnagram(string s, string t) // Sorting both strings and comparing them Time: O(nlogn) Space: O(1)
// {
//     if (s.size() != t.size())
//         return false;

//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());
//     if (s != t)
//         return false;

//     return true;
// }

// bool isAnagram(string s, string t)
// {
//     if (s.size() != t.size())
//     {
//         return false;
//     }

//     vector<int> count(26);

//     for (int i = 0; i < s.size(); i++)
//     {
//         cout << count[s[i] - 'a']++;
//     }

//     cout << "\n";

//     for (int j = 0; j < t.size(); j++)
//     {
//         cout << count[t[j] - 'a']--;
//         if (count[t[j] - 'a'] < 0)
//         {
//             cout << "\n";
//             return false;
//         }
//     }
//     cout << "\n";
//     return true;
// }

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    unordered_map<char, int> Map;

    for (int i = 0; i < s.size(); i++)
    {
        Map[s[i]]++;
    }

    for (int i = 0; i < t.size(); i++)
    {

        if (Map.find(t[i]) != Map.end())
        {
            Map[t[i]]--;
        }
        else
        {
            return false;
        }
    }

    for (auto items : Map)
    {
        if (items.second != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";

    cout << isAnagram(s, t);
}