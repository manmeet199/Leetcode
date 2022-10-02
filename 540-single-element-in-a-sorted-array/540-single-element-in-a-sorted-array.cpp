class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
  //      Naive O(n) 
int XOR=0;
        for(int i=0; i<nums.size(); i++)
        {
            XOR=XOR^nums[i];
        }
        return XOR;
        
        
        //Log(n)
        // int low=0;
        // int high=nums.size()-2;
        // while(low<=high)
        // {
        //     int mid=(low+high)/2;
        //     if(nums[mid]==nums[mid^1])
        //     {
        //         low=mid+1;
        //     }
        //     else
        //     {
        //         high=mid-1;
        //     }
        // }
        // return nums[low];
        
  //  }
    
    
//        int low = 0;
//             int high = nums.size() - 2;
        
//             while (low <= high) 
//             {
//                 int mid = (low + high) / 2;
                
//                 if (mid % 2 == 0) {
//                     if (nums[mid] != nums[mid + 1]) 
//                     //Checking whether we are in right half

//                         high = mid - 1; //Shrinking the right half
//                     else
//                         low = mid + 1; //Shrinking the left half
//                 } else {

//                     //Checking whether we are in right half
//                     if (nums[mid] == nums[mid + 1]) 
//                         high = mid - 1; //Shrinking the right half
//                     else
//                         low = mid + 1; //Shrinking the left half
//                 }
//             }

//             return nums[low];
    }

    
    
};