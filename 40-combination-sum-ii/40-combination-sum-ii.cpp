class Solution {
public:
     void comb(int ind,int target, vector<int>& candidates, vector<vector<int>> &ans, vector<int> &ds)
    {
      if(target==0)
      {
          ans.push_back(ds);
      }
         int i;
         for(int i=ind; i<candidates.size(); i++)
         {
             if(i>ind and candidates[i]==candidates[i-1])
                 continue;
             if(candidates[i]>target)
                 break;
             ds.push_back(candidates[i]);
             comb(i+1,target-candidates[i],candidates,ans,ds);
             ds.pop_back();
             
         }

      
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(),candidates.end());//imp
           vector<vector<int>> ans;
        vector<int> ds;
        comb(0,target,candidates,ans,ds);
        return ans;
    }
};