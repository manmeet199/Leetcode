class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        unordered_map<int,int> m;
        stack<int> s;
          int n=nums.size();
        vector<int> nge(n);
      
        for(int i=2*n-1; i>=0; i--)
        {
            while(!s.empty() and s.top()<=nums[i%n])
            {
                s.pop();
            }
            if(!s.empty())
            {
                nge[i%n]=s.top();
              
            }
            else
            {
                //greater elements left in stack
                 nge[i%n]=-1;
                
            }
            s.push(nums[i%n]);
            
            
            
            
        }
        
      
        return nge;
    }
};