// 1796. Second Largest Digit in a String

// Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 if it does not exist.

// An alphanumeric string is a string consisting of lowercase English letters and digits.

// Example 1:

// Input: s = "dfa12321afd"
// Output: 2
// Explanation: The digits that appear in s are [1, 2, 3]. The second largest digit is 2.

class Solution
{
public:
    int secondHighest(string s)
    {

        int max = -1;
        int second_max = -1;

        for (int i = 0; i < s.size(); i++)
        {

            // checking if string has digit include those only
            if (isdigit(s[i]))
            {

                // use to convert char into digit eg '5' - '0' -> 5
                int digit = s[i] - '0';

                if (digit > max)
                {
                    second_max = max;
                    max = digit;
                }

                else if (digit > second_max && digit != max)
                {
                    second_max = digit;
                }
            }
        }
        return second_max;
    }
};