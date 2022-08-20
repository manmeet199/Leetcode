class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            while(low<high and nums[low]==nums[low+1])//dupli
                low++;
            while(low<high and nums[high]==nums[high-1])//dupli
                high--;
            int mid=low +(high-low)/2;
            
            if(nums[mid]==target)
                return true;
                
            else if(nums[low]<=nums[mid])//left half  low---> high
            {
                if(nums[low]<=target and nums[mid]>=target)
                {
                    high=mid-1;
                    
                }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                 //right half 
            //mid--->high
                if(nums[mid]<=target and nums[high]>=target)
                {
                     low=mid+1;
                  
                    
                }
                else
                {  high=mid-1;
                   
                }
            
            }
        }
        return false;
    }
};