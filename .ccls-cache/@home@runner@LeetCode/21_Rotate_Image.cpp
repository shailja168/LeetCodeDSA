class Solution {
public:
    void swap(int& x, int& y){
        int temp = x;
        x = y;
        y = temp;
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};