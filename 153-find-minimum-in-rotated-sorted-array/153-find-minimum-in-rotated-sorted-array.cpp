class Solution {
public:
    int findMin(vector<int>& nums) {
       // return *min_element(nums.begin(),nums.end());
        int low=0;
       
        int high=nums.size()-1;
        while(low<high)
            
        {
            
            while(low<high and nums[low]==nums[low+1])
                low++;
            while(low<high and nums[high]==nums[high-1])
                high--;
             int mid=low+(high-low)/2;
            if(nums[mid]<nums[high])
                high=mid;// we use mid when we have to find some value and mid-1 when we just want to know wether we have the value ?
                else if(nums[mid]>nums[high])
                    low=mid+1;
        }
        return nums[low];
    }
};