class Solution {
public:
    int jump(vector<int>& nums) {
        int cur=0,farthest=0,jumps=0;
        for(int i=0; i<nums.size()-1; i++)
        {
        farthest=max(farthest,nums[i]+i);
            if(i==cur)
            {
                jumps++;
                cur=farthest;
            }
        }
        return jumps;
    }
};