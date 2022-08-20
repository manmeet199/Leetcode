class Solution {
public:
    int mySqrt(int x) {
        long long int low=0;
        long long int high=x;
        long long int ans=0;
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;
            if(mid*mid==x)
                return mid;
            if(mid*mid<x)
            {
                low=mid+1;
                ans=mid;
                
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};