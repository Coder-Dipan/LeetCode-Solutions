#define ll long long int
class Solution {
public:
    ll solve(ll l, ll r, vector<int>& piles, vector<ll>& arr, vector<vector<ll>>& dp){
        if(l > r) return 0;

        if(l == r) return piles[l];

        if(dp[l][r] != -1){
            return dp[l][r];
        } 

        ll leftsum = solve(l+1, r, piles, arr, dp);
        ll rightsum = solve(l, r-1, piles, arr, dp);
        ll sum = arr[r] - ((l == 0) ? 0 : arr[l - 1]);

        return dp[l][r] = max((sum - leftsum), (sum - rightsum));
    }

    bool stoneGame(vector<int>& piles) {
        vector<vector<ll>>dp(501, vector<ll>(501, -1));
        ll n = piles.size();
        vector<ll> arr(n+1, 0);
        ll sum = 0;
        for(int i=0; i<n; i++){
            sum += piles[i];
            arr[i] = sum;
        }

        ll temp = solve(0, n-1, piles, arr, dp);

        if(temp > (temp - sum)){
            return true;
        }

        return false;


    }
};