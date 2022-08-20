class Solution {
public:
    
    
//       void dfs( vector< vector< char > > &grid, int i, int j)
//     {
//         if( i<0  or i>=grid.size() or j<0 or j>=grid[0].size())
//           return;
        
//         if(grid[i][j]=='0') 
//         {
//             grid[i][j]='1';
//         }
          
        
        
//         dfs( grid, i+1,j);
//         dfs( grid, i-1,j);
//         dfs( grid, i,j+1);
//         dfs(grid,i,j-1);
        
        
        
        
//     }
//     void solve(vector<vector<char>>& grid) {
      
//        if(grid.size() == 0)
//             return;
//         int row = grid.size(), col = grid[0].size();
        
//         //first row and last row
//         for(int i=0; i<row; i++){
//             dfs(grid, i, 0);
//             dfs(grid, i, col-1);
//         }
//         //first col and last col
//         for(int j=1; j<col-1; j++){
//             dfs(grid, 0, j);
//             dfs(grid, row-1, j);
//         }
        
//         for (int i = 0; i < row; ++i)
//             for (int j = 0; j < col; ++j)
//                 if (grid[i][j] == 'O') grid[i][j] = 'X';
//                 else if (grid[i][j] == '1') grid[i][j] = 'O';
 
//     }
   
// class Solution {
// public:
     void dfs(vector<vector<char>>& grid, int i, int j)
{
        
        if( i<0  or i>=grid.size() or j<0 or j>=grid[0].size())
          return;
    if(grid[i][j] == 'O'){
        
        grid[i][j] = '1';

        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
         dfs(grid, i, j-1);
    }
}
    void solve(vector<vector<char>>& grid) {
        if(grid.size() == 0)
            return;
        int row = grid.size(), col = grid[0].size();
        
    //dfs call from    //first row and last row
        for(int i=0; i<row; i++){
            dfs(grid, i, 0);
            dfs(grid, i, col-1);
        }
        //first col and last col
        for(int j=1; j<col-1; j++){
            dfs(grid, 0, j);
            dfs(grid, row-1, j);
        }
        
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < col; ++j)
                if (grid[i][j] == 'O') grid[i][j] = 'X';
                else if (grid[i][j] == '1') grid[i][j] = 'O';
    }
};