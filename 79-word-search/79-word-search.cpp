class Solution {
public:
bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<bool>> used(m,vector<bool>(n,false));
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ans(board,used,m,n,i,j,0,word)) return true;
                
            }
           
        }
         return false;
    }
    
 bool ans(vector<vector<char>>& board,vector<vector<bool>>& used, int m, int n, int i, int j, int str,string& word){
        if(str==word.size()) return true;
 if(i<0 || j<0 || i>=m || j>=n || str>word.size()||used[i][j]|| board[i][j]!=word[str]) return false;
    used[i][j]=true;
    bool result=(ans(board,used,m,n,i+1,j,str+1,word)||
                ans(board,used,m,n,i,j+1,str+1,word)||
                ans(board,used,m,n,i-1,j,str+1,word)||
                ans(board,used,m,n,i,j-1,str+1,word));
        used[i][j]=false; //Backtracking
  return result;
        }

   
   

};