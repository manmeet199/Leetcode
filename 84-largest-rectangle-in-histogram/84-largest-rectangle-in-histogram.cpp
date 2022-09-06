class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
       int maxA=0;
        stack<int> s;
        int width;
    for(int i=0; i<=n; i++)
    {
        while(!s.empty() and (i==n or heights[s.top()]>=heights[i]))
        {
            auto height=heights[s.top()];
            
            s.pop();
            
            
            if(s.empty())
            {
                width=i;
                
            }
            else
            {
              width=i-s.top()-1;
            }
            
            
            maxA=max(maxA,height*width);
        }
        s.push(i);//imp
    }
        return maxA;
    }
};