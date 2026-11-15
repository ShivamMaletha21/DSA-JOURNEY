// 125. Valid Palindrome

//  A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

class Solution
{
public:
    bool isPalindrome(string s)
    {

        string cleaned;

        // shifting characters to lowecase and also removing unwanted things non numeric
        // isalnum -> it si use to remove non-alphanumeric characters
        for (char ch : s)
        {
            if (isalnum(ch))
            {
                cleaned += tolower(ch);
            }
        }
        int left = 0;
        int right = cleaned.length() - 1;

        // compare , if different than return false, else (if same) left++ and right--

        while (left < right)
        {

            if (cleaned[left] != cleaned[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};