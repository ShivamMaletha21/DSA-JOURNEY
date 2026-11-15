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

        // outer loop
        for (int i = 0; i < nums.size(); i++)
        {

            int count = 0;

            // innner loop
            for (int j = 0; j < nums.size(); j++)
            {

                if (nums[i] == nums[j])
                {

                    count++;
                }
            }
            // condition to check duplicates
            if (count == 1)
            {
                return nums[i];
            }
        }

        // if nothing happens return -1
        return -1;
    }
};

// good approach
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        int result = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            result = result ^ nums[i];
        }

        return result;
    }
};