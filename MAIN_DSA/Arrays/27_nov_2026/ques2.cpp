// 26. Remove Duplicates from Sorted Array

// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int j = 0;

        for (int i = 1; i < nums.size(); i++)
        {

            if (nums[i] != nums[j])
            {
                j++;
                nums[j] = nums[i];
            }
        }

        // retrrning the number of unique elemnts
        return j + 1;
    }
};