class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int water = 0;
        while(l<r){
            int area = ((r-l)*min(height[r],height[l]));
            water = max(water, area);
            if(height[r]<height[l])
                r--;
            else
                l++;
        }
        return water;
    }
};