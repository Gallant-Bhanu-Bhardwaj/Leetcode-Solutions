class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0 , bestBuy = prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i] > bestBuy)
            {
                maxi = max(maxi, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }

        return maxi;
    }
};