class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
      unordered_map<int, int> mapp;
        int sum = 0;
        mapp[0] = -1;
        for(int i=0; i<nums.size(); i++) {
            (sum += nums[i]) %= k;
            if(mapp.count(sum)) {if(i-mapp[sum]>1) return true;}
            else mapp[sum] = i;
        }
        return false;
    }
};