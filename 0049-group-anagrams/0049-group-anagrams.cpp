class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        int n=strs.size();
        for(int i=0; i<n; i++)
        {

        string x=strs[i];
            
           sort(x.begin(),x.end());
            mp[x].push_back(strs[i]);
            
        }
        
        for(auto it: mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};