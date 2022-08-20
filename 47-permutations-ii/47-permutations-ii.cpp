class Solution {
public:
     void permutationshlp(vector<int>& nums, vector<vector<int>> &permutations, int i)
    {
        if(i==nums.size())
        {
            permutations.push_back(nums);
        return;
        }
        unordered_set<int> s;
         
        for(int j=i; j<nums.size(); j++)
        {
            if(s.find(nums[j])!=s.end())
                continue;
            s.insert(nums[j]);
            
            swap(nums[i],nums[j]);
            permutationshlp(nums,permutations,i+1);
           swap(nums[i],nums[j]);//backstarck for next i
            
        }
     }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       vector<vector<int>> permutations;
        permutationshlp(nums,permutations,0);
        return permutations;
    }
};