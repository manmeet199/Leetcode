class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
     int n=heights.size();
        int maxA=0;
        int width;
        stack<int> st;
        
        for(int i=0; i<=n; i++)
        {
    while(!st.empty() and (i==n or heights[st.top()]>=heights[i]) )  //st.top() gives prev smaller
          {
              auto it=heights[st.top()];
              st.pop();
              if(st.empty())
              {
                  width=i;
              }
              else
              {
                  width=i-st.top()-1;
              }
              maxA=max(maxA,it*width);
              
          }
            st.push(i);
          }
    
        return maxA;
    }
};