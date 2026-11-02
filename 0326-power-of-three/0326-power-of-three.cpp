class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;

        int x = 1;
        while(x < n) {
            if(x > n / 2) {
                return false;
            }

            x *= 3;
        }

        return x == n;
    }
};