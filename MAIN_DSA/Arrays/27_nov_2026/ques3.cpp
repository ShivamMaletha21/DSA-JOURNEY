// 268. Missing Number
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// Example 1:
// Input: nums = [3,0,1]
// Output: 2
// Explanation:
// n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

// brute
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        for (int i = 0; i <= nums.size(); i++)
        {

            bool found = false;

            for (int j = 0; j < nums.size(); j++)
            {

                if (nums[j] == i)
                {
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                return i;
            }
        }
        return -1;
    }
};

// optmize
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        int n = nums.size();

        int expected = n * (n + 1) / 2;
        int actualSum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            actualSum += nums[i];
        }

        return expected - actualSum;
    }
};