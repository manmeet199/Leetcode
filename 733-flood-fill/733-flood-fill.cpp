class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int i, int j, int color, int initial)
    {
        int n=image.size();
        int m=image[0].size();
        if(i<0 or j<0 or i>=n or j>=m or image[i][j]!=initial)
        {
            return;
            
        }
        image[i][j]=color;
       dfs(image,i+1,j,color,initial);
        dfs(image,i-1,j,color,initial);
        dfs(image,i,j+1,color,initial);
        dfs(image,i,j-1,color,initial);
    
    
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]!=color)
            dfs(image,sr,sc,color,image[sr][sc]);
        return image;
    }
};