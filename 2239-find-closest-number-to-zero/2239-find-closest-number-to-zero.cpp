class Solution {
public:
    int findClosestNumber(vector<int>& arr) {
      
  return *min_element(arr.begin(), arr.end(), [](int a, int b)
                      {
                          return abs(a)<abs(b) or( abs(a)==abs(b) and a>b); 
                      });
    }
};