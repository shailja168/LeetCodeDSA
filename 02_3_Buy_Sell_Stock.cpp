class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest_price1 = INT_MAX, profit1 = INT_MIN;
        int lowest_price2 = INT_MAX, profit2 = INT_MIN;
        for (int i = 0; i < prices.size(); i++) {
            lowest_price1 = min(lowest_price1, prices[i]);
            profit1 = max(profit1, prices[i] - lowest_price1);
            lowest_price2 = min(lowest_price2, prices[i]-profit1);
            profit2 = max(profit2, prices[i] - lowest_price2);
        }
        return profit2;
    }
};