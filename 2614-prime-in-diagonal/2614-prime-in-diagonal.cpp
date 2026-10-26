class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();

        int maxPrime = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int val = nums[i][j];

                if(i == j || i + j == n - 1){
                    if(val > 1){
                        bool isPrime = true;

                        for(int k = 2; k * k <= val; k++){
                            if(val % k == 0){
                                isPrime = false;
                                break;
                            }
                        }

                        if(isPrime){
                            maxPrime = max(maxPrime, val);
                        }
                    }
                }
            }
        }

        if(maxPrime == INT_MIN){
            return 0;
        } else {
            return maxPrime;
        }
    }
};