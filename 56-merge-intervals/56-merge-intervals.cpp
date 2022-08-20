class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());//imp
        
        vector<int> t=intervals[0];
        for(auto it: intervals)
        {
            if(t[1]>=it[0])
            {
                t[1]=max(t[1],it[1]);
                
                
            }
            else
            {
                ans.push_back(t);
                t=it;//update interval
            }
                
        }
        ans.push_back(t);
        
        return ans;
    }
    
};