class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long int p=1;
        int ans=0;
        int n=nums.size();
        int start=0,end=0;
        while(end<n)
        {
          p*=nums[end];
            while(start <n and p>=k)
            {
                p/=nums[start];
                start++;
            }
            
            if(p<k)
            {
               ans+=end-start+1; 
            }
            end++;
            
            
        }
        
        return ans;
            
    }
};