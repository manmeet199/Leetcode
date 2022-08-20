class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //O(n^2)
//           int maxPro = 0;
//     int n = arr.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//           if (arr[j] > arr[i]) {
//             maxPro = max(arr[j] - arr[i], maxPro);
//           }
//         }
//       }

//     return maxPro;
        int n=prices.size();
        int maxi=0;
        int mini=INT_MAX;
        for(int i=0; i<n; i++)
        {
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]-mini);
        }
        return maxi;
    }
};