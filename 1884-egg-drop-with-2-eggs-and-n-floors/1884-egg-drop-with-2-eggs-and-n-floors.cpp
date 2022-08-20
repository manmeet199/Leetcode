class Solution {
public:
    int dp[1001][3];
    int solve(int n, int eggs)
    {
        
        if(dp[n][eggs]!=-1)
        {
            return dp[n][eggs];
        }
        int minr=INT_MAX;
        //base case
       
        if(n<=1 or eggs==1) return n;
       
        
        for(int i=1;i<=n;i++){
            minr = min(minr ,1+ max(solve(i-1 , eggs-1) , solve( n-i, eggs)));
        }
        return dp[n][eggs]=minr;
    }
    int twoEggDrop(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n,2);
    }
};