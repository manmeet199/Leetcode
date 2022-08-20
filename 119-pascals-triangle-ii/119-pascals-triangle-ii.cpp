class Solution {
public:
    vector<int> getRow(int r) {
      vector<int> v(r+1,1);
        long res=1;
        for(int i=1;i<r;i++)
        {
            res=res*(r+1-i)/i;
            v[i]=res;
        }
        
        return v;
    }
};