class Solution {
public:
   bool partition(vector<int>& nums,int sum, int n ) 
   {
     
     int dp[n+1][sum+1];
for(int i=0; i<=n; i++)
{
    for(int j=0; j<=sum; j++)
    {
        if(i==0)
        {
            dp[i][j]=false;
            
        }
        
        else if(j==0||(i==0 and j==0))
        {
            dp[i][j]=true;
        }
        
        else if(nums[i-1]<=j)
        {
         dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
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
        int sum=0;
        for(auto it:nums)
        {
            sum+=it;
        }
        
        
        if(sum%2!=0)
            return false;
        return partition(nums,sum/2,n);
    }
};