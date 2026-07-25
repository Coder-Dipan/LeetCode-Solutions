class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;

        while(n){
            int rem = n % 10;

            ans.push_back(rem);

            n /= 10;
        }

        sort(ans.begin(), ans.end());

        int sz = ans.size();

        return ans[sz-1] * ans[sz-2];
    }
};