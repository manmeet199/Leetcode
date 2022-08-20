class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,vector<string>> dp;
        if(dp.find(s)!=dp.end())
        {
            return dp[s];
            
        }
        vector<string> res;
        for(auto it: wordDict)
        {
            if(s.substr(0,it.length())==it)
               {
               if(s.length()==it.length())
               {
                res.push_back(it);
                   
               }
                   else
                   {
                       vector<string> tmp=wordBreak(s.substr(it.length()),wordDict);
                         for(auto x: tmp)
                   {
                       res.push_back(it+" "+x);
                       
                   }
                       
                   }
                 
                   
               }
               
        }
               return dp[s]=res;
    }
};