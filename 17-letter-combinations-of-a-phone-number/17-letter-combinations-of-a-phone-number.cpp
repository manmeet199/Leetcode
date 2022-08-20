class Solution {
public:
    
    vector<string> res;
    void helper(string &digits, int ind, string cur)
    {
    vector<string> v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       if(ind==digits.size())
       {
           res.push_back(cur);
           return ;
       }
        string s=v[digits[ind]-'0'];
        for(int i=0; i<s.size(); i++)
        {
            helper(digits,ind+1,cur+s[i]);
        }
        
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="")
            return {};
        helper(digits,0,"");
        return res;
            
    }
};