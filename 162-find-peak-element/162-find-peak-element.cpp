class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        // int ans=0;
        // for(int i=0; i<n-2; i++)
        // {
        //     if((nums[i]<nums[i+1]) and (nums[i+1]<nums[i+2]))
        //     {
        //      ans=nums[i+1];     
        //     }
        //    else
        //    {
        //        return 0;
        //    }
        // }
        // return ans;
        int lo=0;
        int hi=n-1;
        int mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if(nums[mid]<nums[mid+1])
                lo=mid+1;
            else
                hi=mid;
            
            
        }
        return lo;
    }
};