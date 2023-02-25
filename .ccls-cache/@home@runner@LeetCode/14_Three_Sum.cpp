class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int a = nums[i];
            int target = -a; //a+b+c=0 so, b+c=-a
            int x=i+1, y=n-1;
            while(x<y){
                int sum = nums[x]+nums[y];
                if(sum == target) {
                    ans.push_back({a,nums[x],nums[y]});
                    //for repeating numbers
                    while(x<y && nums[x+1]==nums[x]) x++;
                    while(x<y && nums[y-1]==nums[y]) y--;
                    x++;
                    y--;
                }
                else if(sum < target) x++;
                else y--;
            }
            //for repeating numbers
            while(i+1<n && nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};