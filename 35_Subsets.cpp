class Solution {
public:
    void helper(int i, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans){
        //base condition
        if(i == nums.size()){
            ans.push_back(temp);
        }
        else{
            //considering the ith element
            temp.push_back(nums[i]);
            helper(i+1, nums, temp, ans);

            //not considering the ith element
            temp.pop_back();
            helper(i+1, nums, temp, ans);
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0, nums, temp, ans);
        return ans;
    }
};