class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int dig_Sum = 0;
        int prod = 1;

        while(n > 0){
            int rem = n % 10;
            dig_Sum += rem;
            prod *= rem;
            n /= 10;
        }

        int sum = dig_Sum + prod;
       
        return original % sum == 0;
    }
};