class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int maxi=0;
        for(auto it: nums)
        {
            if(s.find(it-1)==s.end())
            {
                int y=it+1;
                while(s.find(y)!=s.end())
                {
                    
                    
                    y++;
                }
                maxi=max(maxi,y-it);
                
            }
        }
        return maxi;
    }
};