class Solution {
public:
 int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int maxa=0;
        int n=heights.size();
        for(int i=0; i<=n; i++)
        {
            while(!s.empty()&&(i==n || heights[s.top()]>=heights[i]))
            {
                int h=heights[s.top()];
                s.pop();
                int w;
                if(s.empty())
                w=i;
                else
                w=i-s.top()-1;
                
                maxa=max(maxa,h*w);
                
                
            }
            s.push(i);
        }
        return maxa;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
    
        int maxres=0;
  vector<int> heights(m,0);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j]=='1')
                {
                    heights[j]++;
                }
                else
                {
                    heights[j]=0;
                }
            }
              int tmp=largestRectangleArea(heights);
        maxres=max(maxres,tmp);
        }
        
      
        return maxres;
    }
};