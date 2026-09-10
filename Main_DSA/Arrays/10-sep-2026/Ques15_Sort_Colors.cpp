// 75. Sort Colors
// You are given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

// Example 1:
// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Explanation:
// The array has two 0s, two 1s, and two 2s.
//  Sorting them in-place places all 0s first, then all 1s, then all 2s.

// using brute force ... using selection sort
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        // using selection sort
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int minIndex = i;

            for (int j = i + 1; j < nums.size(); j++)
            {

                if (nums[j] < nums[minIndex])
                {
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]);
        }
    }
};

// optimised solution - > using DUTCH NATIONAL ALGORITHM
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int start = 0;
        int end = nums.size() - 1;
        int mid = 0;

        while (mid <= end)
        {

            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[start]);
                start++;
                mid++;
            }

            else if (nums[mid] == 1)
            {
                mid++;
            }

            // mid = 2
            else
            {
                swap(nums[mid], nums[end]);
                end--;
            }
        }
    }
};