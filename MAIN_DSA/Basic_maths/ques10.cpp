// Leetcode -> 204. Count Primes

// brute force
class Solution
{
public:
    int countPrimes(int n)
    {

        int count = 0;

        for (int i = 2; i < n; i++)
        {

            // first assuming that every numbers is prime
            bool isPrime = true;

            for (int j = 2; j * j <= i; j++)
            {

                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
            {
                count++;
            }
        }
        return count;
    }
};

// optimized sol... aglo -> sieve of eratosthenes
class Solution
{
public:
    int countPrimes(int n)
    {

        if (n <= 2)
        {
            return 0;
        }

        // Mark no as prime  initaly
        vector<bool> isPrime(n, true);

        // 0 and 1 are not prime
        isPrime[0] = false;
        isPrime[1] = false;

        // Check up to square root of n
        for (int i = 2; i * i <= n; i++)
        {

            if (isPrime[i] == true)
            {

                // Mark multiples as non-prime
                for (int j = 2; i * j < n; j++)
                {
                    isPrime[i * j] = false;
                }
            }
        }

        // Count prime numbers
        int count = 0;

        for (int i = 2; i < n; i++)
        {
            if (isPrime[i] == true)
            {
                count++;
            }
        }

        return count;
    }
};