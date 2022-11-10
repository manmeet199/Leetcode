class Solution {
public:
    string removeDuplicates(string s) {
     string ans="";
        for(int i=0; i<s.size(); i++)
        {
            if(ans.size()>0 and s[i]==ans.back())
            {
                ans.pop_back();
            }
            else
            {
                ans+=s[i];
                
            }
        }
        return ans;
    }
};