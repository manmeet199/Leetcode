class Solution {
public:
    vector<int> res;
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1; i<=9; i++) {
            fun(1, i, n, k);
        }
        return res;
    }
    
    void fun(int idx, int num, int n, int k) {
        if(idx == n) {
            res.push_back(num);
            return;
        }
        int last = num%10;
        if(k==0) {
            fun(idx+1, num*10+last, n, k);
            return;
        }
        if(last-k>=0) fun(idx+1, num*10+(last-k), n, k);
        if(last+k<=9) fun(idx+1, num*10+(last+k), n, k);
    }
};