class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        int pos=0;
        for(int i=0; i<n; i++)
        {
            dp[i][i]=1;
        }
        
        int maxi=1;
        for(int i=n-2; i>=0; i--)
        {
            for(int j=i+1; j<n; j++)
            {
                if(s[i]==s[j])
                {
                    if(dp[i+1][j-1]==1 or j-i==1)
                    {
                        dp[i][j]=1;
                        if(maxi<=j-i)
                        {
                            maxi=j-i+1;
                            pos=i;
                        }
                        
                    }
                    
                }
            }
        }
        
        
        return s.substr(pos,maxi);
        
        
    }
};