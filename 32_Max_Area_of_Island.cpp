class Solution {
public:
    vector<pair<int,int>> v;

    bool visited(int r, int c, vector<pair<int,int>> v){
        for(auto i : v){
            if(i.first == r && i.second == c)
                return 1;
        }
        return 0;
    }

    int dfs(int r, int c, int row, int col, vector<vector<int>>& grid){
        if(r<0 || r==row || c<0 || c==col || grid[r][c] == 0 || visited(r, c, v))
            return 0;
        v.push_back({r,c});
        return 1 + dfs(r-1,c, row, col, grid) + dfs(r+1,c, row, col, grid) 
                 + dfs(r,c-1, row, col, grid) + dfs(r,c+1, row, col, grid);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        int area = 0;
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                area = max(area,dfs(i,j,row,col, grid));

        return area;
    }
};