class Solution {
public:
    void sortColors(vector<int>& nums) {
//         int n=nums.size();
//         int cnt0,cnt1,cnt2;
//         cnt0=0;
//         cnt1=0;
//         cnt2=0;
        
//      for(int i=0; i<n; i++)
//      {
//          if(nums[i]==0)
//          {
//              cnt0++;
//          }
//          else if(nums[i]==1)
//          {
//              cnt1++;
//          }
//          else
//          {
//              cnt2++;
//          }
         
//      }
//         for(int i=0; i<cnt0; i++)
//         {
//             nums[i]=0;
            
//         }
//         for(int i=cnt0; i<(cnt1+cnt0); i++)
//         {
//             nums[i]=1;
            
//         }
//         for(int i=(cnt0+cnt1); i<nums.size(); i++)
//         {
//             nums[i]=2;
            
//         }
        
        
        //Dutch national flag;
        int low=0;
        int hi=nums.size()-1;
        int mid=0;
        while(mid<=hi)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                mid++;
                low++;
                
                
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            
            else
            {
                swap(nums[mid],nums[hi]);
                
                hi--;
            }
        }
        
    
    }
};