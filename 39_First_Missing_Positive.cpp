class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            if(nums[0]<=0)
                return 1;
            else if (nums[0] == 1)
                return 2;
            else
                return 1;
        }
        sort(nums.begin(),nums.end());
        int ans = 1;
        for(int i=0; i<n; i++){
            if(nums[i]==ans){
                ans++;
            }
        }
        return ans;
    }
};