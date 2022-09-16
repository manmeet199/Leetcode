class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
//         vector<int> lis(n);
// for(int i=0; i<n; i++)
// {
//     lis[i]=1;
// }
//         for(int i=0; i<n; i++)
//         {
            
//             for(int j=0;j<i; j++)
//             {
//                 if(nums[i]>nums[j] and lis[i]<lis[j]+1)
//                 {
//                     lis[i]=lis[j]+1;
//                 }
//             }
//         }
//         return *max_element(lis.begin(),lis.end());
        vector<int> res;
        for(int i=0; i<n; i++)
        {
            auto it=lower_bound(res.begin(),res.end(),nums[i]);
            if(it==res.end())
            {
                res.push_back(nums[i]);
            }
            else
            {
                *it=nums[i];
            }
        }
        return res.size();
    }
};