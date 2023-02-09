class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int lowest = INT_MAX, profit = INT_MIN;
    for (int i = 0; i < prices.size(); i++) {
      lowest = min(lowest, prices[i]);
      profit = max(profit, prices[i] - lowest);
    }
    if (profit > 0) {
      return profit;
    } else {
      return 0;
    }
  }
};