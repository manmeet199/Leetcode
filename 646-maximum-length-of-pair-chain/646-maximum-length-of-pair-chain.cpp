class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        sort(pairs.begin(),pairs.end());
        int n=pairs.size();
        int dp[n];
        dp[0]=1;
        for(int i=1; i<n; i++)
        {
             dp[i]=1;
            for(int j=0; j<i; j++)
            {
               
                if(pairs[j][1]<pairs[i][0])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp,dp+n);
    }
};