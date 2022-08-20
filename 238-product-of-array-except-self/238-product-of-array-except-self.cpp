class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//      int prod=1;
//         for(int i=1; i<=nums.size(); i++)
//         {
//             prod=prod*i;
            
//         }
//         vector<int> ans;
//           for(int i=0; i<nums.size(); i++)
//         {
              
//               int v=prod/nums[i];
//             ans.push_back(v);
            
//         }
        
//         return ans;
       
//         int n=nums.size();
        
 
        
        
//          vector<int> l(n),r(n);
//         l[0]=1;
//         r[n-1]=1;
//         for(int i=1; i<n; i++)
//         {
//             l[i]=l[i-1]*nums[i-1]; //prefix product left to right
//         }
//          for(int i=n-2; i>=0; i--)
//         {
//             r[i]=r[i+1]*nums[i+1]; // prefix producr right to left
//         }
//          for(int i=0; i<n; i++)
//         {
//             nums[i]=l[i]*r[i];
//         }
//         return nums;
        
        
        
        int n=nums.size();
        vector<int> ans(n);
     ans[n-1]=1; //right prod
        for(int i=n-2; i>=0; i--)
        {
            ans[i]=ans[i+1]*nums[i+1];
        }
        int leftprod=1;
        for(int i=0; i<n; i++)
        {
            ans[i]=ans[i]*leftprod;
            leftprod=leftprod*nums[i];
        }
        return ans;
        
//         vector<int> ans(nums.size(),1);//declare 1
//         for(int i=0; i<nums.size(); i++)
//         {
//             for(int j=0; j<nums.size(); j++)
//             {
//                   if(i==j)
//                       continue;
//                 ans[i]=ans[i]*nums[j];
                
//             }
//         }
//         return ans;
        }
    
    
    

};