class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> dir = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

        int n = board.size(), m = board[0].size();
        // vector<vector<int>> ans(n, vector<int>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int aliveCells = 0;
                for(auto d : dir){
                    int x = i + d[0];
                    int y = j + d[1];

                    if(x>=0 && x<n && y>=0 && y<m && (board[x][y]==1 || board[x][y]==2))
                        aliveCells++;
                }
                //2 represents: cell was alive -> now dead
                if(board[i][j]==1){
                    if(aliveCells < 2 || aliveCells > 3){
                        //ans[i][j]=1;
                        board[i][j]=2;
                    }
                }
                //3 represents: cell was dead -> now alive
                else{
                    if(aliveCells == 3)
                        //ans[i][j]=1;
                        board[i][j]=3;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // board[i][j] = ans[i][j];;
                board[i][j]%=2;
            }
        }
    }
};