#include <iostream>
#include <bits/stdc++.h>
// #include <vector>

using namespace std;

// vector<int> twoSum(vector<int> &nums, int target) // BruteForce Time: O(n^2) Space: O(1)
// {
//     vector<int> result;

//     for (int pos{0}; pos < nums.size(); pos++)
//     {
//         for (int i{pos + 1}; i < nums.size(); i++)
//         {
//             if (nums[pos] + nums[i] == target)
//             {
//                 result.push_back(pos);
//                 result.push_back(i);
//             }
//         }
//     }

//     return result;
// }

vector<int> twoSum(vector<int> &nums, int target) // Hashmap Time: O(n) Space: O(n)
{
    unordered_map<int, int> m;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (m.find(complement) != m.end())
        {
            result.push_back(m[complement]);
            result.push_back(i);
            break;
        }
        else
        {
            m.insert({nums[i], i});
        }
    }

    return result;
}

int main()
{
    vector<int> nums{11, 7, 11, 2};
    int target = 9;

    for (auto i : twoSum(nums, target))
    {
        cout << i << " ";
    }
}