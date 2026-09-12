// 121. Best Time to Buy and Sell Stock

// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

// brute force
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int cost_p = 0;
        int sel_p = 0;
        int profit = 0;

        for (int i = 0; i < prices.size(); i++)
        {

            for (int j = i + 1; j < prices.size(); j++)
            {

                if (prices[i] < prices[j])
                {
                    cost_p = prices[i];
                    sel_p = prices[j];
                }

                int current_profit = sel_p - cost_p;
                if (current_profit > profit)
                {

                    profit = current_profit;
                }
            }
        }
        return profit;
    }
};

// optimise solution
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int minValue = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++)
        {

            int currentProfit = prices[i] - minValue;

            maxProfit = max(maxProfit, currentProfit);

            minValue = min(minValue, prices[i]);
        }

        return maxProfit;
    }
};
