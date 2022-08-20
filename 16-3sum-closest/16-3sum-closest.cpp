class Solution {
public:
    int threeSumClosest(vector<int>& num, int target) {
            
      int mini=INT_MAX;
        int res=0;
        sort(num.begin(), num.end()); 
        
     for(int i=0; i<num.size()-2; i++)
     {
       
         int j=i+1;
         int k=num.size()-1;
         
         while(j<k)
         {
             int sum=num[i]+num[j]+num[k];
         if(abs(sum-target)<mini)
         {
             mini=abs(sum-target);
             res=sum;
         }
        
         else if(sum<target)
         {
             j++;
         }
         else
         {
             k--;
         }
     }
     }
        return res;
    }
};