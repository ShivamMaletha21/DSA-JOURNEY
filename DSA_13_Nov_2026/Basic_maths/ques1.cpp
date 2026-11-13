// 781. Count all Digits of a Number 
class Solution
{
public:
    int countDigit(int n)
    {

        int count = 0;

        while (n > 0)
        {
            count++;

            n = n / 10; // it removes last digit
        };

        return count;
    };
