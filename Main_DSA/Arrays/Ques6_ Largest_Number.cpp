// 747. Largest Number At Least Twice of Others
// You are given an integer array nums where the largest integer is unique.

// Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element, or return -1 otherwise.

// Example 1:

// Input: nums = [3,6,1,0]
// Output: 1
// Explanation: 6 is the largest integer.
// For every other number in the array x, 6 is at least twice as big as x.
// The index of value 6 is 1, so we return 1.

class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {

        int max = nums[0];
        int max_index = 0;

        for (int i = 1; i < nums.size(); i++)
        {

            // maximum num
            if (nums[i] > max)
            {
                // give max number
                max = nums[i];

                // give max index where max numb is
                max_index = i;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {

            // means that if we got i == max ; then the condion max<2*num[i] does not check
            // for it it got skip for that particular i and then i++ check for next i
            // we dont check the condtion for same index we skip it
            if (i == max_index)
            {
                continue;
            }

            // this condition will check the max number with every other number
            // except .. i == max_index; as index(5==5) (then why does we check 10 < 2 * 10)...
            if (max < 2 * nums[i])
            {
                return -1;
            }
        }
        return max_index;
    }
};