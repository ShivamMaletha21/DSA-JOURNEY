// 414. Third Maximum Number

// You are given an integer array nums.

// Return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
// Example 1:
// Input: nums = [3,2,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2.
// The third distinct maximum is 1.

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {

        // first distinct max.. uisng llong as very smallest value as nums is int
        long long max = LLONG_MIN;

        // second distinct max
        long long second_max = LLONG_MIN;

        // third distinct max
        long long third_max = LLONG_MIN;

        for (int i = 0; i < nums.size(); i++)
        {

            // condtition for getting 1st max
            if (nums[i] > max)
            {
                third_max = second_max;
                second_max = max;
                max = nums[i];
            }

            // condtition for getting 2nd max
            else if (nums[i] > second_max && nums[i] != max)
            {
                third_max = second_max;
                second_max = nums[i];
            }

            // for 3rd max
            else if (nums[i] > third_max && nums[i] != second_max && nums[i] != max)
            {
                third_max = nums[i];
            }
        }
        // this is the reason we use llong as if third_max is int_min itself
        // then we want to return third_max not max
        if (third_max == LLONG_MIN)
        {
            return max;
        }
        return third_max;
    }
};