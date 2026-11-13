// 211. Palindrome Number
class Solution
{
public:
    bool isPalindrome(int n)
    {

        int original = n;
        int reverse = 0;

        for (; n > 0; n = n / 10)
        {

            int digit = n % 10;

            reverse = reverse * 10 + digit;
        }
        if (original == reverse)
        {
            return true;
        }
        return false;
    }
};