class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1=INT_MAX;
        int profit1=INT_MIN;
        int buy2=INT_MAX;
        int profit2=INT_MIN;
        int n=prices.size();
        for(int i=0; i<n; i++)
        {
             buy1=min(buy1,prices[i]);
             profit1=max(profit1,prices[i]-buy1);
             buy2=min(buy2,prices[i]-profit1);// utitlize the profit gained earlier
             profit2=max(profit2,prices[i]-buy2);
        }
        return profit2;
    }
};