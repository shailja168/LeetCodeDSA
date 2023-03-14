class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
 
        int jumps = 0, currMaxJump = 0, maxJump = 0;
        for(int i=0;i<n;i++){
            maxJump = max(maxJump,i + nums[i]);

            //if we jump beyond n-1, we add 1 jump and break the loop
            if(maxJump >= n-1) { 
                jumps++;
                break;        
            }

            if(i == currMaxJump){
                jumps++;
                currMaxJump = maxJump;
            }            
        }
        return jumps;
    }
};