// 455. Assign Cookies

// Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

// Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {

        // sorting g (child) and s(cookies)
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        // couter
        int i = 0;
        int j = 0;
        int count = 0;

        // condition for loop
        while (i < g.size() && j < s.size())
        {

            // if condition hits then inc the count and move to next child and next cookie
            if (s[j] >= g[i])
            {
                count++;
                i++;
                j++;
            }
            // if not the move to next cookie
            else
            {
                j++;
            }
        }
        return count;
    }
};