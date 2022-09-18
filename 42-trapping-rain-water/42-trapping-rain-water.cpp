class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int leftm=0;
        int rightm=0;
        int ans=0;
        while(left<=right)
        {
            if(height[left]<=height[right])
            {
                if(height[left]>leftm)
                {
                    leftm=height[left];
                }
                else
                {
                  
                    ans+=leftm-height[left];
                }
                left++;
            }
            else
            {
                if(height[right]>rightm)
                {
                    rightm=height[right];
                }
                else
                {
                    ans+=rightm-height[right];
                }
                right--;
            }
        }
        return ans;
    }
};