class Solution {
public:
    
    void comb(int ind , int target, vector<int>& candidates,      vector<vector<int>> &ans, vector<int> &ds)
        
    {
        
        if(ind==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
                
            }
            return;
        }
        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            comb(ind,target-candidates[ind],candidates,ans,ds);//pick
            ds.pop_back();
        }
        comb(ind+1,target,candidates,ans,ds);// no pick
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
        vector<int> ds;
        comb(0,target,candidates,ans,ds);
        return ans;
    }
};