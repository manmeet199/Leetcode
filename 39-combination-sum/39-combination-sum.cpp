class Solution {
public:
    void solve(vector<int>& nums, int i, int cs,int target, vector<int>& temp, vector<vector<int>>& res )
    {
        if(cs>target)
            return;
        if(cs==target)
        {
         res.push_back(temp);
            return;
        }
        for(int j=i; j<nums.size(); j++)
        {
            temp.push_back(nums[j]);
            cs+=nums[j];
            solve(nums,j,cs,target,temp,res);
            cs-=nums[j];
            
            temp.pop_back();
            
            
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        solve(nums,0,0,target,temp,res);
        return res;
    }
};