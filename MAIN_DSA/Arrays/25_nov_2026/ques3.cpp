// 695. Second Largest Element
// Given an array of integers nums, return the second-largest element in the array.

// If the second-largest element does not exist, return -1.

// Example 1:
// Input: nums = [8, 8, 7, 6, 5]

// Output: 7

// Explanation:

// The largest value in nums is 8, the second largest is 7

class Solution
{
public:
    int secondLargestElement(vector<int> &nums)
    {

        int largest = nums[0];
        int secondlargest = INT_MIN;

        for (int i = 1; i < nums.size(); i++)
        {

            if (nums[i] > largest)
            {
                secondlargest = largest;
                largest = nums[i];
            }

            else if (nums[i] < largest && nums[i] > secondlargest)

            {
                secondlargest = nums[i];
            }
        }

        return secondlargest;
    }
};