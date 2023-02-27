class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int freq = 0, major = 0;
        for(int i=0; i<n-1;i++){
            if(nums[i]==nums[i+1]){
                freq++;
            }
            else{
                if(freq >= n/2)
                    return nums[i];
                freq=0;
            }
        }
        if(freq >= n/2)
            return nums[n-1];
        else
            return -1;
    }
};