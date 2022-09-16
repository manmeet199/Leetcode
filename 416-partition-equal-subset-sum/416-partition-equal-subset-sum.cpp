class Solution {
public:
    
    int helper(vector<int>& nums, int sum, int n)
    {
        int dp[n+1][sum+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=sum; j++)
            {
                if(i==0)
                {
                    dp[i][j]=0;
                }
                else if(j==0 or (i==0 and j==0))
                {
                    dp[i][j]=1;
                    
                }
                else if(nums[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-nums[i-1]] or dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0)
        {
            return 0;
        }
        return helper(nums,sum/2,n);
        
    }
};