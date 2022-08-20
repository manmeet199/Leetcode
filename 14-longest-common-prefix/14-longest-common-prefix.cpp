class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string x=strs[0];
      
        for(int i=1; i<strs.size(); i++)
        {
            string s="";
            for(int j=0; j<x.size(); j++)
            {
                if(strs[i][j]==x[j])
                {
                    s+=strs[i][j];
                    
                }
                else
                {
                    x=s;
                }
                
            }
        }
        return x;
        
    }
};