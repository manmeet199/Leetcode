class Solution {
public:
    //   void solve(string & s, int index, vector < string > & res) {
    //   if (index == s.size()) {
    //     res.push_back(s);
    //     return;
    //   }
    //   for (int i = index; i < s.size(); i++) {
    //     swap(s[i], s[index]);
    //     solve(s, index + 1, res);
    //     swap(s[i], s[index]);
    //   }
    // }
    string getPermutation(int n, int k) {
        
      //  O(N!*N)+(N!logN!)
//      string s;
//         vector<string> res;
//         for(int i=1; i<=n; i++)
//         {
//             s.push_back(i+'0');
            
//         }
//         solve(s,0,res);
//         sort(res.begin(),res.end());
        
//         auto it=res.begin()+k-1;// as res is  0 indexed
//         return *it;
               int fact = 1;
      vector < int > numbers;
      for (int i = 1; i < n; i++) {
        fact = fact * i;
        numbers.push_back(i);
      }
      numbers.push_back(n);
      string ans = "";
      k = k - 1;
      while (true) {
        ans = ans + to_string(numbers[k / fact]);
        numbers.erase(numbers.begin() + k / fact);
        if (numbers.size() == 0) {
          break;
        }

        k = k % fact;
        fact = fact / numbers.size();
      }
      return ans;
    }
};