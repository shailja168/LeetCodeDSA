class Solution {
public:
  vector<int> runningSum(vector<int> &nums) {
    vector<int> runningSum;
    runningSum.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++) {
      runningSum.push_back(nums[i] + runningSum[i - 1]);
    }
    return runningSum;
  }
};