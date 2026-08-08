class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n; i <= 100; i++){
            int prod = 1;
            int x = i;

            while(x){
                int digit = x % 10;
                prod *= digit;
                x /= 10;
            }

            if(prod % t == 0) return i;
        }

        return -1;
    }
};