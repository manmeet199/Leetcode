class Solution {
public:
     int numRollsToTarget(int n, int k, int target) {
        if(target > n*k) return 0;
        int mod = 1e9+7;
        vector<vector<int>> dp(target+1, vector<int>(n, -1));
        return fun(0, 0, target, k, n, mod, dp);
    }
    
    int fun(int curr, int idx, int target, int k, int n, int mod, vector<vector<int>> &dp) {
        if(idx == n) {
            if(target == curr) return 1;
            return 0;
        }
        
        if(dp[curr][idx] != -1) return dp[curr][idx];
        
        int res = 0;
        
        for(int i=1; i<=k; i++) {
            if(curr + i <= target) (res += fun(curr+i, idx+1, target, k, n, mod, dp))%=mod;
        }
        
        return dp[curr][idx] = res;
    }
};