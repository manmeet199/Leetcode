class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> a;
        for(long long int i=0; i<n; i++)
        {
           a.push_back(nums[i]);
        }
        vector<int> res;
        for(int i=0; i<n; i++)
        {
            if((a[abs(a[i])-1]>=0))
            {
                a[abs(a[i])-1]=-a[abs(a[i])-1];
            }
            else
            {
                res.push_back(abs(a[i]));
            }
            
        }
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]>0)
            {
            res.push_back(i+1);
            }
        }
        return res;
    }
};