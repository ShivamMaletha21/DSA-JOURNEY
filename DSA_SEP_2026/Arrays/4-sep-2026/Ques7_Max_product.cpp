// 1464. Maximum Product of Two Elements in an Array
// You are given an array of integers nums.

// Choose two different indices i and j of that array.

// Return the maximum value of (nums[i] - 1) * (nums[j] - 1).

// Example 1:

// Input: nums = [3,4,5,2]
// Output: 12
// Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12.

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {

        int max = nums[0];
        int second_max = INT_MIN;

        // finding 1st max (largest)
        for (int i = 1; i < nums.size(); i++)
        {

            // finding max
            if (nums[i] > max)
            {
                second_max = max;
                max = nums[i];
            }

            // finding second max
            else if (nums[i] > second_max)
            {
                second_max = nums[i];
            }
        }

        return ((max - 1) * (second_max - 1));
    }
};