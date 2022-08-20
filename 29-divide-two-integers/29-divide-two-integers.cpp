class Solution {
public:
    int divide(int dividend, int divisor) {
    //  int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
 
  // Update both divisor and
//   // dividend positive
// if(dividend == INT_MIN && divisor == -1) return INT_MAX;
// 		if(dividend == INT_MIN && divisor == 1) return INT_MIN;
//          if(divisor==0)
//         {
//             return 0;
//         }
//   dividend = abs(dividend);
//   divisor = abs(divisor);
 
//   // Initialize the quotient
//   long int quotient = 0;
//   while (dividend >= divisor) {
//     dividend -= divisor;
//     ++quotient;
//   }
  
 
//   if((dividend<0&&divisor>0) || (dividend>0&&divisor<0)) return -quotient;

// 		return quotient;
         if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        if(divisor==0)
        {
            return 0;
        }
        long ans=0;
        long divid=abs(dividend), divis=abs(divisor);
         while(divis<=divid) {
            long int mul=divis, tmp=1;
            while(mul<=divid-mul) {
                mul+=mul;
                tmp+=tmp;
            }
            ans+=tmp;
            divid-=mul;
        }
        if((divisor>0 and dividend>0) or (divisor<0 and dividend<0))
        {
            return ans;
        }
        return -ans; 
    }
};