class Solution {
public:
    
    void helper(string s, int ind,  vector<string> &tmp,  vector<vector<string>> &ans)
    {
        if(ind==s.size())
        {
            ans.push_back(tmp);
            return;
        }
        for(int i=ind; i<s.size(); i++)
        {
            if(palindrome(s,ind,i))
            {
                tmp.push_back(s.substr(ind,i-ind+1));
                helper(s,i+1,tmp,ans);
                tmp.pop_back();
            }
        }
    }
        
      bool palindrome(string s, int start, int end)
     {
         while(start<=end)
         {
             if(s[start++]!=s[end--])
             {
                 return false;
             }
         }
         return true;
         
     }
    vector<vector<string>> partition(string s) {
      vector<vector<string>> ans;
        vector<string> tmp;
        helper(s,0,tmp,ans);
        return ans;
    }
};