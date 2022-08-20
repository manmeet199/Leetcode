class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int ans=INT_MIN;
        while(left<=right)
        {
            if(height[left]<=height[right])
            {
                ans=max(ans,height[left]*(right-left));
                 left++;       
            }
            else
            {
                ans=max(ans,height[right]*(right-left));
                        right--;
        }
    }               
return ans;      }
};