class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(i>0 and nums[i]==nums[i-1])
            {
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    res.push_back({nums[i],nums[j],nums[k]});
                    
                
                int val1=nums[j];
                while(j<k and nums[j]==val1)
                {
                    j++;
                }
                int val2=nums[k];
                while(j<k and nums[k]==val2)
                {
                    k--;
                }
            }
                else if(nums[i]+nums[j]+nums[k]<0)
                {
                    j++;
                    
                }
                else
                {
                    k--;
                }
                
            }
        }
        return res;
    }
};