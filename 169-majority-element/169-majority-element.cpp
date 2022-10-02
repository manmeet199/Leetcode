class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //voting algo
        int cnt=0;
        int cand=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(cnt==0)
            {
                cand=nums[i];
                
            }
            
            if(nums[i]==cand)
                cnt+=1;
            else
                cnt-=1;
            
        }
        return cand;
    }
};