class Solution {
public:
    void nextPermutation(vector<int>& nums) {        
        int n=nums.size(),pt,i;

        for(pt=n-2;pt>=0;pt--){
            if(nums[pt]<nums[pt+1]){
                break;
            }
        }
        if(pt<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(i=n-1;i>pt;i--){
                if(nums[i]>nums[pt]){
                    break;
                }
            }
            swap(nums[i],nums[pt]);
            reverse(nums.begin()+pt+1,nums.end());
        }
    }
};