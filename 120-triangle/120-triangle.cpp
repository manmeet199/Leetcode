class Solution {
public:
    int dp[200][200];
    int helper(int i, int j , vector<vector<int>>& triangle)
    {
        if(i==triangle.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=triangle[i][j]+min(helper(i+1,j,triangle),helper(i+1,j+1,triangle));
        
            
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int m=triangle[0].size();
        memset(dp,-1,sizeof(dp));
        return triangle[0][0]+min(helper(1,0,triangle),helper(1,1,triangle));
        
      
    }
};