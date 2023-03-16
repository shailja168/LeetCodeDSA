class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalSum = 0, windowSum = 0;
        for(int i=0; i<n; i++){ 
            totalSum+=cardPoints[i];
            if(i < n-k)
                windowSum+=cardPoints[i];
        }

        int currSum = windowSum;

        for(int i = n-k; i<n; i++){
            windowSum += cardPoints[i] - cardPoints[i - n + k];
            currSum = min(currSum, windowSum);
        }            
        return totalSum - currSum;
    }
};