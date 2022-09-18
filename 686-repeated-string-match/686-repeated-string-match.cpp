class Solution {
public:
    int repeatedStringMatch(string a, string b) {
    string p=a;
        int i=1;
        while(i<=(b.size()/a.size())+2)
        {
            if(p.find(b)!=-1)
            {
                return i;
            }
            else
            {
                p+=a;
                i++;
            }
        }
        return -1;
    }
};