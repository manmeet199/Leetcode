class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //O(n) solution            O(nlogn) solution can be achieved by hashset
     int n=nums.size();
        if(n==0)
            return 0;
     
     int i,j;
        i=0;
for(int j=1; j<n; j++)
{
if(nums[i]!=nums[j])
{
    i++;
    nums[i]=nums[j];
}
    
    
    }
        return i+1;
    }
};