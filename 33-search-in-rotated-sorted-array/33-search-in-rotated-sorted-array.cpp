class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[l]<=nums[mid])
            {
                if(nums[l]<=target and nums[mid]>=target)
                {
                    h=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            else
            {
                if(nums[mid]<=target and nums[h]>=target)
                {
                    l=mid+1;
                }
                else
                {
                    h=mid-1;
                }
            }
          
        }
        return -1;
    }
};