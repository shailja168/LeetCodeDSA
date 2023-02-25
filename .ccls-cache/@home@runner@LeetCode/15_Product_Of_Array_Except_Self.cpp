class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n,1);
        int productL = 1, productR = 1;
        for(int i = 0; i<n; i++){
            answer[i]*=productL;
            productL*=nums[i];
            int j = n - i - 1;
            answer[j]*=productR;
            productR*=nums[j];
        }
        return answer;
    }
};