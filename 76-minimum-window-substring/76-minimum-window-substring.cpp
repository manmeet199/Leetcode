class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<char,int> mp;
       int ans=INT_MAX;
        int start=0;
        for(auto it: t)
        {
            mp[it]++;
        }
        
        int count=mp.size();
        int i=0,j=0;
while(j<s.length())
{
    
    mp[s[j]]--;
    
    if(mp[s[j]]==0)
        count--;
    
    
    if(count==0)
    {
        while(count==0)
        {
            if(ans>j-i+1)
            {
                ans=j-i+1;
                start=i;
            }
            
            mp[s[i]]++;
            if(mp[s[i]]>0)
                count++;
            i++;
        }
    }
    j++;
    
    
    
}
        
        return ans==INT_MAX?"":s.substr(start,ans);
    }
};