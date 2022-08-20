class Solution {
public:
   string say(string s)
    {
        string ans="";
        for(int i=0; i<s.length(); i++)
        {
            int count=1;
            while(i+1<s.length() and s[i]==s[i+1])
            {
                count++;
                i++;
            }
            
            ans+=(to_string(count)+s[i]);
            
        }
        return ans;
        
    }
    string countAndSay(int n) {
      if(n==1)
          return "1";
        return say(countAndSay(n-1));
    }
};