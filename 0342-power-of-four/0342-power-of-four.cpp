class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;

        int x = 1;
        while(x < n) {
            if(x > n / 2) {
                return false;
            }

            x *= 4;
        }

        return x == n;
    }
};