class Solution {
    public:
    bool isHappy(int n) {
        int sum = 0;
        while(n != 0) {
            int digit = n % 10;
            sum = sum + (digit * digit);
            n = n / 10;

        }
    }
};

// Leetcode solution:
class Solution {
    public:
    int getSum(int n) {
        int sum = 0;
        while(n != 0) {
            int digit = n % 10;
            sum = sum + (digit * digit);
            n = n / 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        while(n != 0 && n != 4) {
            n = getSum(n);
        }
        return n == 1;
    }
};

// Understanding the solution:
// 1. getSum():- thakes digits one by one, squares them, adds them, returns new number
// 2. Main function:- while(n != 0 && n != 4)
//     means: keep repeating until:- 1 -> happy number, 4 -> not happy number
