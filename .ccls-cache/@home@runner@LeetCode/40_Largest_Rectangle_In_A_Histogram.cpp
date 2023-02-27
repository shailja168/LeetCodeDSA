class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int area = 0;
        heights.push_back(0); //make the last bar zero to avoid handling leftover elements in stack
        for(int i = 0; i<heights.size();i++){
            while(!s.empty() && heights[s.top()] >= heights[i]){
                int h = heights[s.top()];
                s.pop();
                if(s.empty()){
                    area = max(area, h * i);
                }
                else{
                    int len = i - s.top() - 1;
                    area = max(area, h * len);
                }
            }
            s.push(i);
        }
        return area;
    }
};