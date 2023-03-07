class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int ans = INT_MIN;
        //prev stores (yi-xi) in first position and xi in the second position
        priority_queue<pair<int,int>> prev;

        for(int i=0;i<points.size();i++){          
            // if  xj - xi > k then we have to remove that from the queue as it can no longer 
			// contribute to the answer
            while( !(prev.empty()) && (points[i][0] - prev.top().second > k))
                prev.pop();
            
            // now if the queue is not empty then the top of the queue is having 
			// maximum value of ( yi-xi) so we update our answer with (top of the queue) + currvalue
            if( !(prev.empty()) ){
                ans = max(ans, points[i][0] + points[i][1] + prev.top().first);
            }

            // inserting {(yi-xi) , xi} into the queue 
            prev.push({points[i][1] - points[i][0] , points[i][0]});
        }
        return ans;
    }
};