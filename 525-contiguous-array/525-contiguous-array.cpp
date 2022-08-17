class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int n=nums.size();
//         int cnt0=0;
//         int cnt1=0;
//         int ans=INT_MIN;
//         for(int i=0; i<n; i++)
//         {
//             if(nums[i]==0)
//                 cnt0++;
//             if(nums[i]==1)
//                 cnt1++;
            
//             if(cnt0==cnt1)
//             {
//                 ans=max(ans,2*cnt0);
//             }
//             else
//             {
//                 ans=0;
//             }
//         }
//         return ans;
        int maxlen=0;
        int sum=0;
        unordered_map<int,int> mp{{0,-1}};
        
        for(int i=0; i<n; i++)
        {
        sum+=nums[i]==0?-1:1 ;
            
            if(mp.count(sum))
            {
                maxlen=max(maxlen,i-mp[sum]);
            }
            else
            {
                mp[sum]=i;
            }
        }
        return maxlen;
    }
};