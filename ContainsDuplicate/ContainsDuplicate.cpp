#include <iostream>
#include <bits/stdc++.h>

// bool containsDuplicate(vector<int> &nums) // Bruteforce Time: O(n^2) Space: O(n)
// {
//     for (int pos = 0; pos < nums.size(); pos++)
//     {
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (!(pos == i) && nums[pos] == nums[i])
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

bool containsDuplicate(std::vector<int> &nums) // Time: O(n) Space: O(n)
{
    std::unordered_set<int> set;

    for (int i = 0; i < nums.size(); i++)
    {
        if (set.find(nums[i]) != set.end())
            return true;
        set.insert(nums[i]);
    }
    return false;
}

// int checkDuplicates(vector<int> &nums, int current) // Recursive Time: O(n) Space: O(n)
// {
//     static unordered_set<int> set;

//     if (current > nums.size())
//     {
//         return 0;
//     }

//     if (set.find(nums[current]) != set.end())
//         return 1;
//     set.insert(nums[current]);
//     return checkDuplicates(nums, current + 1);
// }

// int containsDuplicate(vector<int> &nums)
// {
//     return checkDuplicates(nums, 0);
// }

int main()
{
    char c;
    std::vector<int> nums{1, 2, 3};

    if (containsDuplicate(nums) == 1)
    {
        std::cout << "TRUE";
    }
    else
    {
        std::cout << "FALSE";
    }

    std::cin >> c;
}
