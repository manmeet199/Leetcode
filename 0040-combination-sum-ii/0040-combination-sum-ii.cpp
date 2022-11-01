class Solution {
public:
    void solve(vector<int> &nums, int i, int cs, int target, vector<int> &temp, vector<vector<int>> &res){
        
        if(cs>target)
        {
            return;
        }
        if(cs==target)
        {
            res.push_back(temp);
            return;
        }
        
        for(int j=i;j<nums.size();j++)
        {
            if(i==j or nums[j]!=nums[j-1])
            {
                temp.push_back(nums[j]);
                cs+=nums[j];
                solve(nums, j+1, cs, target, temp, res);//to avoid dupli
                cs-=nums[j];
                temp.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        solve(nums, 0, 0, target, temp, res);
        return res;
    }
};