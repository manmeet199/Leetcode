class Solution {
public:
    int rob(vector<int>& nums) {
     
     int n=nums.size();
           int dp[n];
       if(n==1)
           return nums[0];
        
        dp[0]= nums[0];
        
     
        dp[1]=max(nums[0],nums[1]);
        for(int i=2; i<n; i++)
        {
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        return dp[n-1];
        
//           if(size(A) == 1) return A[0];
//         vector<int> dp(A);
//         dp[1] = max(A[0], A[1]);
//         for(int i = 2; i < size(A); i++)
//             dp[i] = max(dp[i-1], A[i] + dp[i-2]);
//         return dp.back();
    }
};