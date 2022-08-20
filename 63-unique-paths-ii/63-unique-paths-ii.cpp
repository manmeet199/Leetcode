class Solution {
public:
//      int dp[101][101];
//     int helper(int i, int j,vector<vector<int>>& obstacleGrid)
//     {
        
//      int m=obstacleGrid.size();
//         int n=obstacleGrid[0].size();
    
// if(i>=m || j>=n || i<m || j<n || obstacleGrid[i][j]==1)
// {
// return 0;
//     }
//         if(i==m-1 and j==n-1)
//         {
// return 1;//one of the possible paths
//         }
//         if(dp[i][j]!=-1)
//         {
// return dp[i][j];
//         }
//         return dp[i][j]=helper(i+1,j,obstacleGrid)+helper(i,j+1,obstacleGrid);
        
//     }
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//          memset(dp,-1,sizeof(dp));
       
//         return helper(0,0,obstacleGrid);
     int dp[101][101];
    int dfs(int i, int j, vector<vector<int>>& obstacleGrid)
    {
        
         int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(i<0 || j<0 || i>=n || j>=m || obstacleGrid[i][j]==1)
        return 0;
   
        
         if(dp[i][j]!=-1)
             return dp[i][j];
        if(i==n-1 and j==m-1)
            return 1;
        return dp[i][j]=dfs(i+1,j,obstacleGrid) +dfs(i,j+1,obstacleGrid);
                         
                    
       
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       
         int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        memset(dp,-1,sizeof(dp));
        
                    return dfs(0,0,obstacleGrid);
                
            
    
    }
    
};