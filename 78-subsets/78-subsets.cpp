class Solution {
public:
    
    void helper(int ind, vector<vector<int>>& ans, vector<int> &subs, vector<int>& nums)
    {
        
        if(ind==nums.size())
        {
            ans.push_back(subs);
            return;
        }
       helper(ind+1,ans,subs,nums);
        subs.push_back(nums[ind]);
        helper(ind+1,ans,subs,nums);//skip
        subs.pop_back();
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subs;
        helper(0,ans,subs,nums);
            return ans;
    }
};