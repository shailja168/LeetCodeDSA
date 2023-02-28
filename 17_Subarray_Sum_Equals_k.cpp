class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int sum = 0, result = 0;
        map[sum] = 1;
        for (int i : nums) {
            sum += i;
            result += map[sum - k];
            map[sum]++;
        }
        return result;
    }
};