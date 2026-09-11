// Kaden's Algorithm:

// 53. Maximum Subarray
// Given an integer array nums, find the subarray with the largest sum, and return its sum.
// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

// brute force approach, t.c -> o(n suqare)
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int maxSum = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {

            int currentMax = 0;
            for (int j = i; j < nums.size(); j++)
            {

                currentMax += nums[j];

                maxSum = max(maxSum, currentMax);
            }
        }
        return maxSum;
    }
};

// optimised version ---- KADEN'S ALGORITHM
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int maxSum = nums[0];
        int currentSum = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            currentSum += nums[i];

            // storing the max number among maxSum and currentSum
            maxSum = max(maxSum, currentSum);

            if (currentSum < 0)
            {
                currentSum = 0;
            }
        }
        return maxSum;
    }
};
