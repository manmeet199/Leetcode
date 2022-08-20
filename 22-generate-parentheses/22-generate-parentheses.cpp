class Solution {
public:
  //  We use l and r to denote the number of (s and )s. If l < n, we can add a (. If r < l, we can add a ).
    void helper(int n, int l, int r, string perm, vector<string> &res)//as we are not backtracking so we took string perm and not string &perm
    {
        if(l==n and r==n)
        {
            res.push_back(perm);
                return;
        }
      
        if(l<n)
        {
            helper(n,l+1,r,perm+'(',res);
            
        }
        if(r<l)
        {
             helper(n,l,r+1,perm+')',res);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string perm;
        helper(n,0,0,perm,res);
        return res;
        
    }
};