class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        //For all negative elements followed by positive elements
//         int n=arr.size();
// int j=0;
//         for(int i=0; i<n; i++)
//         {

//         if(arr[i]<0)
//         {
//             if(i!=j)
//             {
//                 swap(arr[i],arr[j]);
//             }
//               j++;
//         }
          
//         }
        
//         return arr;
    
        int n=nums.size();
        int pos=0;
        int neg=1;
            vector<int> ans(n,0);
        for(auto x: nums)
        {
            if(x>0)
            {
                ans[pos]=x;
                pos+=2;
            }
            if(x<0)
            {
            ans[neg]=x;
            neg+=2;
            }
        }
return ans;    
    }
};