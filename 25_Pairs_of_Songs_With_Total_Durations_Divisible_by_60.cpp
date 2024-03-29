class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n = time.size();
        if(n==1) return 0;

        int count = 0;
        vector<int> rem(60,0);
        for(int i=0;i<n;i++){
            if(time[i]%60 == 0)
                count+=rem[0];
            else
                count+=rem[60-(time[i]%60)];
            rem[time[i]%60]++;
        }
        return count;
    }
};