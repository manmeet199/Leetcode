class Solution {
public:
    
    void helper(int ind, vector<vector<int>> &ans, vector<int> &nums)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=ind; i<nums.size(); i++)
        {
            swap(nums[i],nums[ind]);
            helper(ind+1,ans,nums);
            swap(nums[i],nums[ind]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
      
         helper(0,ans,nums);
        return ans;
    }
};