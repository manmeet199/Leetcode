class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        for(int i=1; i<=n; i++)
        {

        s+=to_string(i);
        }
        vector<string> seq;
               seq.push_back(s);
        while(next_permutation(s.begin(),s.end()))
        {
            seq.push_back(s);
        }
        return seq[k-1];
    }
};