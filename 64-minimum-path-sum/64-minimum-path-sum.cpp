class Solution {
public:
    int dp[201][201];
    int helper(int i, int j, vector<vector<int>>& grid)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size())
            return INT_MAX;//not 0 for minimum path sum
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(i==grid.size()-1 and j==grid[0].size()-1)
        {
            return grid[i][j];
        }
        
        int x=helper(i,j+1,grid);
        int y=helper(i+1,j,grid);
        return dp[i][j]=grid[i][j]+min(x,y);
        
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
            return helper(0,0,grid);
    }
};