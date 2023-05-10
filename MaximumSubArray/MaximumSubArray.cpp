#include <iostream>
#include <bits/stdc++.h>

class Solution
{
public:
    int maxSubArray(std::vector<int> &nums)
    {
        int sub{nums[0]};
        int currentsum{0};

        for (auto n : nums)
        {
            if (currentsum < 0)
                currentsum = 0;
            currentsum += n;
            sub = std::max(sub, currentsum);
        }
        return sub;
    }
};