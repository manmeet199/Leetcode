class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
         int c = 1, sum = neededTime[0], maxx = sum, res = 0;
        
        for(int i=1; i<colors.length(); i++) {
            if(colors[i] == colors[i-1]) {
                maxx = max(maxx, neededTime[i]);
                sum += neededTime[i];
                c++;
            } else {
                if(c>1) {
                    sum -= maxx;
                    res += sum;
                }
                c = 1;
                maxx = neededTime[i];
                sum = maxx;
            }
        }
        if(c>1) {
            sum -= maxx;
            res += sum;
        }
        return res;
    }
};