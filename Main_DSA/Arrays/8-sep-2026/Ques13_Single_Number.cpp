// 136. Single Number
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:

// Input: nums = [2,2,1]

// Output: 1

// this is brute fore , t.c -> 0(nsqure).. we hvae to reduce it
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;

            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }

            if (count == 1)
            {
                return nums[i];
            }
        }

        return -1;
    }
};