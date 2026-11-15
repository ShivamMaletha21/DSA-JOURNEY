// 31. Next Permutation
// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].

// Example 1:

// Input: nums = [1,2,3]
// Output: [1,3,2]
// Example 2:

// Input: nums = [3,2,1]
// Output: [1,2,3]
// Example 3:

// Input: nums = [1,1,5]
// Output: [1,5,1]

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();

        // 1. Find the pivot
        int i = n - 2;

        while (i >= 0 && nums[i] >= nums[i + 1])
        {
            i--;
        }

        // 2. Find the next greater element
        if (i >= 0)
        {
            int j = n - 1;

            while (nums[j] <= nums[i])
            {
                j--;
            }

            swap(nums[i], nums[j]);
        }

        // 3. Reverse the part after the pivot
        reverse(nums.begin() + i + 1, nums.end());
    }
};
