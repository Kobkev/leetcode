#include <iostream>
#include <vector>

int maxProfit(std::vector<int> &prices)
{
    int r{1}, l{0}, max_profit{0}, current_profit{0};

    while (r < prices.size())
    {
        if (prices[l] < prices[r])
        {
            current_profit = prices[r] - prices[l];
            max_profit = std::max(current_profit, max_profit);
        }
        else
        {
            l = r;
        }
        r++;
    }
    return max_profit;
}

int main()
{
    std::vector<int> nums{7, 1, 5, 3, 6, 4};
}