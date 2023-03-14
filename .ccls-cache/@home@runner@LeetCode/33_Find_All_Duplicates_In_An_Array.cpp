class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++) freq[nums[i]]++;

        vector<int> ans;
        for(auto i : freq){
            if(i.second >= 2){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};