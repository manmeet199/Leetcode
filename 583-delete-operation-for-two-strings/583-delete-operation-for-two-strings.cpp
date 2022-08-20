class Solution {
public:
    
    int lcs(int n , int m , string X, string Y)
    {
        int dp[n+1][m+1];
        for(int i=0; i<n+1; i++)
        {
for(int j=0; j<m+1; j++)
{
if(i==0 || j==0)
    dp[i][j]=0;
}
            }
        
        
        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<m+1; j++)
            {
                if(X[i-1]==Y[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
    int minDistance(string word1, string word2) {
        
        int n=word1.size();
        int m=word2.size();
        return n+m-2*lcs(n,m,word1,word2);
    }
};