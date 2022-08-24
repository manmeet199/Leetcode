class Solution {
public:
    bool isPowerOfThree(int n) {
//         if(n==1)
//             return 1;
//         if(n<3)
            
//             return 0;
//         long long x=3;
//         while(x<n)
//         {
//             x*=3;
//         }
//         return (x==n)?1:0;
        
        
         if(n==0)
            return false;
        while(n%3==0)
        {
            n=n/3;
            
            
            
        }
        
        
        return n==1;
    }
};