class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
       vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        int maxi=1;

        int pos=0;
        for(int i=0; i<n; i++)
        {
            dp[i][i]=1;
        }
        
        
        for(int i=n-2; i>=0 ; i--)
        {
            for(int j=i+1; j<n; j++)
            {
                if(s[i]==s[j])
                {
                    if(j-i==1 or dp[i+1][j-1]==1)
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