// 2733. Neither Minimum nor Maximum

// Given an integer array nums containing distinct positive integers, find and return any number from the array that is neither the minimum nor the maximum value in the array, or -1 if there is no such number.

// Return the selected integer.
// Example 1:
// Input: nums = [3,2,1,4]
// Output: 2
// Explanation: In this example, the minimum value is 1 and the maximum value is 4. Therefore, either 2 or 3 can be valid answers.

class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {

        if (nums.size() < 3)
        {
            return -1;
        }

        int min = nums[0];
        int max = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {

            // minimum number
            if (nums[i] < min)
            {
                min = nums[i];
            }
            // maximum number
            if (nums[i] > max)
            {
                max = nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {

            // third value num which is not max or min...
            if (nums[i] != min && nums[i] != max)
            {
                return nums[i];
            }
        }

        return -1;
    }
};