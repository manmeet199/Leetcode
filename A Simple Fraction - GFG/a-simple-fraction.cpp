//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	string fractionToDecimal(int numerator, int denominator) {
	    // Code here
	         if(!numerator) return "0";
        string ans = "";
        if (numerator > 0 ^ denominator > 0) ans += '-';
        long num = labs(numerator), den = labs(denominator);
        long q = num / den;
        long r = num % den;
        ans += to_string(q);
        
        if(r == 0) return ans;
        
        ans += '.';
        unordered_map<long, int> mp;
        while(r != 0){
            if(mp.find(r) != mp.end()){
                int pos = mp[r];
                ans.insert(pos, "(");
                ans += ')';
                break;
            }
            else{
                mp[r] = ans.length();
                r *= 10;
                q = r / den;
                r = r % den;
                ans += to_string(q);
            }
        }
        return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends