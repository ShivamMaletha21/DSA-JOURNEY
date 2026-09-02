// 905. Sort Array By Parity

// Given an integer array nums, move all the even integers
// at the beginning of the array followed by all the odd integers.
// Return any array that satisfies this condition.

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right)
        {

            // check left number
            if (nums[left] % 2 == 0)
            {
                // if number is even then we move the pointer forward
                left++;
            }
            // check right number
            else if (nums[right] % 2 != 0)
            {
                // if number is odd then we move the pointer towards left
                right--;
            }

            // if above both condition dont hit, then swap
            else
            {
                // swap the numbers
                swap(nums[left], nums[right]);

                // then move the left pointer forward
                left++;
                // and right pointer backward
                right--;
            }
        }
        return nums;
    }
};