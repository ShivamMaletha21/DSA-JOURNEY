// 1. Two Sum
// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// brute force , here t.c -> o(n square)

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {

                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        // returning empty vector
        return {};
    }
};

// optimized solution , using hash map (unordered_map)

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        // creating a unordered_map (using hash map)
        // first int -> key, second int -> value
        unordered_map<int, int> map;

        // using loop for iteration
        for (int i = 0; i < nums.size(); i++)
        {

            int needed = target - nums[i];

            if (map.find(needed) != map.end())
            {

                return {map[needed], i};
            }
            map[nums[i]] = i;
        }

        return {};
    }
};