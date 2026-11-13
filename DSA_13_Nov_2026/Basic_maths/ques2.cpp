// 950. Count number of odd digits in a number
class Solution
{
public:
    int countOddDigit(int n)
    {
        int count = 0;

        while (n > 0)
        {
            count++;
            n = n / 2 == 0 && n != 0;
        }
        return count;
    }
};