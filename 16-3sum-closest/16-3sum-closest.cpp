class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int mini=INT_MAX;
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-2; i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<mini)
                {
                 mini=abs(sum-target);
                    ans=sum;
                }
               else if(sum<target)
               {
                   j++;
               }
                else
                {
                    k--;
                }

            }
        }
        return ans;
    }
};