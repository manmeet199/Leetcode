class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         unordered_set<int> S;
//     int ans = 0;
//  int n=arr.size();
//     // Hash all the array elements
//     for (int i = 0; i < n; i++)
//         S.insert(arr[i]);
 
//     // check each possible sequence from
//     // the start then update optimal length
    
//     for (int i = 0; i < n; i++)
//     {
//         // if current element is the starting
//         // element of a sequence
//         if (S.find(arr[i] - 1) == S.end())
//         {
//             // Then check for next elements
//             // in the sequence
//             int j = arr[i]+1;
//             while (S.find(j) != S.end())
//                 j++;
        
            
//             ans = max(ans,j-arr[i]);
//         }
//     }
//     return ans;
        unordered_set<int> s(nums.begin(),nums.end());
        int maxl=0;
        for(auto x:nums)
        {
            if(s.find(x-1)==s.end())
            {
                int y=x+1;
                while(s.find(y)!=s.end())
                {
                   y++;
                }
                   maxl=max(maxl,y-x);
                
            }
         
        }
        return maxl;
    }
};