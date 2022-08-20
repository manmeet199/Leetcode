class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        
//        vector<int> m(256,-1);
//     int start=-1;
//        int maxi=0;
//         for(int i=0; i<s.size(); i++)
//         {
//             if(m[s[i]]>start)
//             {
//                 start=m[s[i]];
//             }
//             m[s[i]]=i;
//             maxi=max(maxi,i-start);
//         }
//         return maxi;
        int n=str.size();
          if(n==0)
      return 0;
        set<char> s;
        
  int maxans = 0;
        int i=0,j=0;
        
 while(j<n)
 {
     if(s.count(str[j])==0)
     {
         s.insert(str[j]);
         maxans=max(maxans,(int)s.size());
             j++;
     }
     else
     {
         s.erase(str[i]);
         i++;
     }
     
 }
  return maxans;

    }
};