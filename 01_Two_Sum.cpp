// two pointer approach
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> v;

        for(int i =0; i<n;i++)v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        int x=0,y=n-1;
        while(x<y){
            int sum = v[x].first + v[y].first;
            if(sum == target)return {v[x].second,v[y].second};
            else if(sum>target) y--;
            else x++;
        }
        return {-1,-1};
    }
};

