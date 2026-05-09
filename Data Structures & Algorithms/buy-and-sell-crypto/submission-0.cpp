class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
            profit=max(prices[j]-prices[i],profit);
            }
        }
        return profit;
        
    }
};