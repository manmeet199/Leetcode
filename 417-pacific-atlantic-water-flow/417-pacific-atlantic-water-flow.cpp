//time: O(m*n)
//space: O(m*n)
class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j, int m, int n, vector<vector<bool>>& visited){
        visited[i][j] = true;
        
        if(i+1 < m and visited[i+1][j]!=true and grid[i+1][j]>=grid[i][j])
        {
            dfs(grid, i+1, j, m, n, visited);
        }
        
        if(i-1 >= 0 and visited[i-1][j]!=true and grid[i-1][j]>=grid[i][j])
        {
            dfs(grid, i-1, j, m, n, visited);
        }
        if(j-1 >= 0 and visited[i][j-1]!=true and grid[i][j-1]>=grid[i][j])
        {
            dfs(grid, i, j-1, m, n, visited);
        }
        if(j+1 < n and visited[i][j+1]!=true and grid[i][j+1]>=grid[i][j])
        {
            dfs(grid, i, j+1, m, n, visited);
        }
    
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<bool>> pac(m, vector<bool>(n));
        vector<vector<bool>> atl(m, vector<bool>(n));
        
        for(int i=0;i<m;i++)
        {
            dfs(grid, i, 0, m, n, pac);
            dfs(grid, i, n-1, m, n, atl);
        }
        
        for(int j=0;j<n;j++)
        {
            dfs(grid, 0, j, m, n, pac);
            dfs(grid, m-1, j, m, n, atl);
        }
        
        vector<vector<int>> res;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(atl[i][j] and pac[i][j])
                {
                    res.push_back({i,j});
                }
            }
        }
        return res;
        
    }

};