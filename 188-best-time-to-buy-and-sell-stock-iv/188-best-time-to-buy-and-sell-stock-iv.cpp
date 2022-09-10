class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        if(k==0)
            return 0;
        vector<int> sell(k,0),buy(k,INT_MAX);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<k; j++)
            {
                buy[j]=min(buy[j],prices[i]-(j-1>=0? sell[j-1]:0));
                sell[j]=max(sell[j],prices[i]-buy[j]);
                
                
            }
        }
        return sell[k-1];
    }
};