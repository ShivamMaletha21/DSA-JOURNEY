// 779. Check for Prime Number
class Solution
{
public:
    bool isPrime(int n)
    {

        if (n <= 1)
        {
            return false;
        }

        for (int i = 2; i * i <= n; i++)
        {

            if (n % i == 0) // If true → A divisor is found → Not prime → Return false
            {
                return false;
            }
        }

        return true;
    }
};
