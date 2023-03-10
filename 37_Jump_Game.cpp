class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxjump = 0, i = 0;
        while(i<nums.size() && i<=maxjump){
            maxjump = max(maxjump, i + nums[i]);
            i++;
        }
        return i == nums.size(); //means we reached the final target
    }
};