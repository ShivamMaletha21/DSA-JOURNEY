// Leetcode -> 912. Sort an Array
class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {

        for (int i = 0; i < nums.size(); i++)
        {

            int minIndex = i;

            for (int j = i + 1; j < nums.size(); j++)
            {

                // we get minIndex from here
                if (nums[j] < nums[minIndex])
                {
                    minIndex = j;
                }
            }
            // then we swap minIdex and elemnt at i postion
            swap(nums[i], nums[minIndex]);
        }
        return nums;
    }
};
