class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
         sort(properties.begin(), properties.end(), [](vector<int> &a, vector<int> &b) {
            return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
        });
        int n = properties.size(), res = 0, maxx = INT_MIN;
        
        for(int i=n-1; i>=0; i--) {
            if(properties[i][1] < maxx) res++;
            maxx = max(properties[i][1], maxx);
        }
        
        return res;
    }
};