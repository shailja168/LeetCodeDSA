class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int diff = 0;
        for(int i=1;i<n;i++){
            diff = diff + (nums[i]-nums[0]);
        }
        return diff;
    }
};