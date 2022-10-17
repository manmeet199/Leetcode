//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        
         long long f[n+1];
        const int m= 1e9+7;
        int i;
        //base case
        f[0]=0;
        f[1]=1;
        
        for(i=2; i<=n; i++){
            f[i] = (f[i-1]+f[i-2])%m;
        }
        return f[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends