class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> nonoverlap;
        int start = intervals[0][0], finish = intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            if((intervals[i][0] <= finish) && (intervals[i][1] > finish)){
                finish = intervals[i][1];
            }
            else if(intervals[i][0] <= finish){
                continue;
            }
            else{
                vector<int> temp = {start, finish};
                nonoverlap.push_back(temp);
                start = intervals[i][0];
                finish = intervals[i][1];
            }
        }
        vector<int> temp = {start, finish};
        nonoverlap.push_back(temp);
        return nonoverlap;
    }
};