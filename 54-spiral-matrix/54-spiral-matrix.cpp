class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int top,down,left,right,i,dir;
        top=0;
        down=r-1;
        left=0;
        right=c-1;
        dir=0;
        vector<int> ans;
        while(top<=down && left<=right)
        {
            if(dir==0)
            {
            for( i=left; i<=right; i++)
            
                ans.push_back(matrix[top][i]);
                top++;
                
            }
            
                 else if(dir==1)
            {
            for( i=top; i<=down; i++)
            
                ans.push_back(matrix[i][right]);
                right--;
                
            
                 }
                      else if(dir==2)
            {
            for( i=right; i>=left; i--)
            
                ans.push_back(matrix[down][i]);
                down--;
            
                      }         
                     else if(dir==3)
            {
            for( i=down; i>=top; i--)
            
                ans.push_back(matrix[i][left]);
                left++;
                
            }
                               
            
        
    
              dir=(dir+1)%4;
        }
        
        return ans;  
    }
};