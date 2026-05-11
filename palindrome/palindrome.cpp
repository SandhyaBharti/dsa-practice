class Solution
{
public:
    bool isPalindrome(int a)
    {
        if (a < 0)
        {
            return false;
        }

        int original = a;
        int reversed = 0;

        while (a != 0)
        {
            int digit = a % 10;
            reversed = reversed * 10 + digit;
            a = a / 10;
        }

        if (original == reversed)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};