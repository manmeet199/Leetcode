class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0,j=0;
        while(j<n)
        {
            while(j<n and s[j]==' ')
            {
                j++;
            }
            i=j;
        
        while(i<n and s[i]!=' ')
        {
            i++;
            
        }
        reverse(s.begin()+j,s.begin()+i);
        j=i;
    }
        return s;
    }
};