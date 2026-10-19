class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<int> ans;

        for(int num : nums){
            int count = 0;

            while(num > 0){
                int last_Dig = num % 10;
                num /= 10;
                count++;
            }

            ans.push_back(count);
        }

        int total = 0;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] % 2 == 0){
                total++;
            }
        } 

        return total;
    }
};