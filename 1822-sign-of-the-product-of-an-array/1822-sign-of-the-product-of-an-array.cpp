class Solution {
public:
    int arraySign(vector<int>& nums) {
//         int prod=1;
//         for(int i=0; i<nums.size(); i++)
//         {
//             prod*=nums[i];
//         }
        
       
//            if(prod>0)
//            {
//                return 1;
//            }
//               if(prod<0)
//               {
//                   return -1;              }
              
              
//               return 0;
         int countNeg = 0;
        for(auto x: nums){
            if(x < 0)
                countNeg++;
            else if(x == 0)
                return 0;
        }
        if(countNeg%2 ==0)
            return 1;
        return -1;
    }
};