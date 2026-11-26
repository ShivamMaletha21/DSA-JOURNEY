// Q 189. Rotate Array
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]

// brute force

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        int n = nums.size();

        k = k % n; // remving unnecsary rotations

        for (int j = 0; j < k; j++)
        {

            int temp = nums[n - 1];

            for (int i = n - 1; i > 0; i--)
            {
                nums[i] = nums[i - 1];
            }
            nums[0] = temp;
        }
    }
};

// optimize solution
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        int n = nums.size();

        k = k % n; // remving unnecsary rotations

        // reverse the entire array
        reverse(nums.begin(), nums.end());

        // reverse the starting elemnt
        reverse(nums.begin(), nums.begin() + k);

        // reverse the remaining last elemnts
        reverse(nums.begin() + k, nums.end());
    }
};