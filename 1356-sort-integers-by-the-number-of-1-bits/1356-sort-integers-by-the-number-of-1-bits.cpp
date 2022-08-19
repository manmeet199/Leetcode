class Solution {
public:
    vector<int> sortByBits(vector<int>& a) {
     sort(a.begin(),a.end(), [] (int &b, int &c)
          {   
         if(__builtin_popcount(b)==__builtin_popcount(c))
          
          return b<=c;
          return __builtin_popcount(b)<__builtin_popcount(c);
         
             
              
    });
        
        return a;
    }
};