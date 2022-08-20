class Solution {
public:
   int dp[2001][2001];	
    bool ispalindrome(string &s, int i,int j){	
        while(i<=j)
        {
       if(s[i++]!=s[j--])
            return false;
            }
        return true;
    }	
    
    
    
    //Martix chain multipliction
    int solve(string s, int i,int j){	
       // if(i>=j) return 0;	
        if(ispalindrome(s,i,j)==true){	
           
            return 0;	                         
        } 	                                          
        if(dp[i][j]!=-1) return dp[i][j];	
        int left,right;	
        int ans=INT_MAX;	
        for(int k=i; k<=j-1; k++)        //       k=i to j-1
        {
            if(ispalindrome(s,i,k))
            {
                if(dp[i][k]!=-1)
                {
                    left=dp[i][k];
                    
                }
                else
                {
                    left=solve(s,i,k);
                    dp[i][k]=left;
                }
                
                if(dp[k+1][j]!=-1)
                {
                    right=dp[k+1][j];
                    
                }
                else
                {
                    right=solve(s,k+1,j);
                    dp[k+1][j]=right;
                }
                  
            int temp=1+left+right;
            
            ans=min(ans,temp);
                
            }
            
            
          
        }
        return dp[i][j]=ans;
        	
    }	
    int minCut(string s) {	
        int n=s.size();	
        memset(dp,-1, sizeof(dp));	
        	
        return solve(s,0,n-1);
    }
};