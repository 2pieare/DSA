class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int r = board.size();
        int c = board[0].size();
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                int neighbour = live(board, i, j, r, c); //live returns all the live neighbours
                if(board[i][j] == 1){
                    if(neighbour<2 or neighbour>3)
                        board[i][j] = -board[i][j];
                }else{
                    board[i][j] = 2;
                    if(neighbour != 3)
                        board[i][j] = -board[i][j];
                }
            }
        }
        
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                board[i][j] = board[i][j] < 0 ? 0 : 1;
    }
    
    int dis[8][2] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};
    
    int live(vector<vector<int>>& board, int i, int j, int r, int c){
        int ans = 0;
        for(int k=0; k<8; k++){
            int x = i + dis[k][0];
            int y = j + dis[k][1];
            if(x>=0 and y>=0 and x<r and y<c and abs(board[x][y])==1)   ans++;
        }
        return ans;
    }
};
