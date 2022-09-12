class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
            sort(tokens.begin(), tokens.end());
        int n = tokens.size(), i = 0, j = n-1, ans = 0, res = 0;
        
        while(i<=j) {
            if(tokens[i] <= power) {
                res++;
                power -= tokens[i++];
                ans = max(ans, res);
            } else if(res > 0) {
                res--;
                power += tokens[j--];
            } else break;
        }
        return ans;
    }
};