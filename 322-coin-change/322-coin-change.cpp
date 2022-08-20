class Solution {
public:
    int coinChange(vector<int>& coins, int  V) {
//         int n=coins.size();
//      int dp[n+1][amount+1];
// for(int i=0; i<=n; i++)
// {
//     for(int j=0; j<=amount; j++)
//     {
//         if(i==0)
//         {
//             dp[i][j]=INT_MAX-1;
            
//         }
        
//         else if(j==0||(i==0 and j==0))
//         {
//             dp[i][j]=0;
//         }
        
//         else if(coins[i-1]<=j)
//         {
//          dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
//         }
//         else
//         {
//             dp[i][j]=dp[i-1][j];
//         }
//     }
// }
//         return dp[n][amount]!=INT_MAX-1?dp[n][amount]:-1;
        
        //greedy
        
        int m=coins.size();
        
      int table[V+1];
 
    // Base case (If given value V is 0)
    table[0] = 0;
 
    // Initialize all table values as Infinite
    for (int i=1; i<=V; i++)
        table[i] = INT_MAX;
 
    // Compute minimum coins required for all
    // values from 1 to V
    for (int i=1; i<=V; i++)
    {
        // Go through all coins smaller than i
        for (int j=0; j<m; j++)
          if (coins[j] <= i)
          {
              int sub_res = table[i-coins[j]];
              if (sub_res != INT_MAX && sub_res + 1 < table[i])
                  table[i] = sub_res + 1;
          }
    }
   
      if(table[V]==INT_MAX)
        return -1;
   
    return table[V];
    }
};