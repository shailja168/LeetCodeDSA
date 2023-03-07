class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closestSum = nums[0] + nums[1] + nums[nums.size()-1];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;

            int start=i+1, end=nums.size()-1;
            while(start < end){
                int currSum = nums[i] + nums[start] + nums[end];
                if(currSum == target)
                    return currSum;
                if( abs(currSum - target) < abs(closestSum - target) )
                    closestSum = currSum;
                if(currSum < target) 
                    start++;
                else        
                    end--;
            }
        }
        return closestSum;
    }
};