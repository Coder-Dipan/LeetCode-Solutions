class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end(), greater<int>());

        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(i == 0 || nums[i] != nums[i - 1]){
                ans.push_back(nums[i]);
            }
        }

        if(ans.size() < 3){
            return ans[0];
        }

        return ans[2];
    }
};