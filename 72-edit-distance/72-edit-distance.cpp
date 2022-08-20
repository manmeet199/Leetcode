class Solution {
public:
    int solve(string word1, string word2, int n, int m)
    {
          
        int dp[n+1][m+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0;j<=m; j++)
            {
                
        
        
       if(i==0 )
           dp[i][j]=j;
                else if(j==0)
                    dp[i][j]=i;
                else if(word1[i-1]==word2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                }
            }
        }
                
                return dp[n][m];
                
                
    }
    int minDistance(string word1, string word2) {
       int n=word1.size();
        int m=word2.size();
        return solve(word1,word2,n,m);
    }
};