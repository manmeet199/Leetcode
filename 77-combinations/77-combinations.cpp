class Solution {
public:
    void helper(int start, vector<int> &combination, vector<vector<int>> &res,int n, int k)
    {
       if(combination.size()==k)
       {
           res.push_back(combination);
           return;
       }
        for(int i=start; i<=n; i++)
        {
         combination.push_back(i);
            helper(i+1,combination,res,n,k);
            combination.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> combination;
        vector<vector<int>> res;
         helper(1,combination,res,n,k);
        return res;
    }
};