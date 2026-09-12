// 189. Rotate Array

// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// brute force
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        for (int i = 0; i < k; i++)
        {

            // Save the last element
            int temp = nums[nums.size() - 1];

            // Shift all elements one position to the right
            for (int j = nums.size() - 1; j > 0; j--)
            {
                nums[j] = nums[j - 1];
            }

            // Put the saved last element at index 0
            nums[0] = temp;
        }
    }
};

// optimised solution
class Solution
{

public:
    void rotate(vector<int> &nums, int k)
    {

        vector<int> temp(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {

            // storing new values at temporary vector
            temp[(i + k) % nums.size()] = nums[i];
        }

        // then copy temp vector to nums vector at last (the whole vector)
        nums = temp;
    }
};