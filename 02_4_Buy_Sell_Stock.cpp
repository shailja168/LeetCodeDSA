class Solution {
public:
    int unlimited_transactions(vector<int>& prices) {
        int profit = 0;
        for(int i=0;i<prices.size() - 1;i++){
            if(prices[i]<prices[i+1])
                profit += prices[i+1] - prices[i];
        }
        return profit;
    }
    int maxProfit(int k, vector<int>& prices) {

        if(k<=0 || prices.size()<= 0) 
            return 0;
            
        if(k>prices.size()/2)
            return unlimited_transactions(prices);

        int lowest_prices[k], profits[k];
        for (int i = 0; i < k; i++){
            lowest_prices[i] = INT_MAX;
            profits[i] = INT_MIN;
        }

        for (int i = 0; i < prices.size(); i++) {
            for(int j=0; j<k;j++){
                lowest_prices[j] = min(lowest_prices[j], prices[i] - (j>0?profits[j-1]:0));
                profits[j] = max(profits[j], prices[i] - lowest_prices[j]);
            }
        }
        return profits[k-1];
    }
};class Solution {
public:
    int unlimited_transactions(vector<int>& prices) {
        int profit = 0;
        for(int i=0;i<prices.size() - 1;i++){
            if(prices[i]<prices[i+1])
                profit += prices[i+1] - prices[i];
        }
        return profit;
    }
    int maxProfit(int k, vector<int>& prices) {

        if(k<=0 || prices.size()<= 0) 
            return 0;
            
        if(k>prices.size()/2)
            return unlimited_transactions(prices);

        int lowest_prices[k], profits[k];
        for (int i = 0; i < k; i++){
            lowest_prices[i] = INT_MAX;
            profits[i] = INT_MIN;
        }

        for (int i = 0; i < prices.size(); i++) {
            for(int j=0; j<k;j++){
                lowest_prices[j] = min(lowest_prices[j], prices[i] - (j>0?profits[j-1]:0));
                profits[j] = max(profits[j], prices[i] - lowest_prices[j]);
            }
        }
        return profits[k-1];
    }
};