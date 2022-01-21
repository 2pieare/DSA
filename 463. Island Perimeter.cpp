class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        if(m == 0 || n == 0) return 0;

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(grid[i][j]==1){
                    ans += 4;
                    if(i > 0 && grid[i-1][j]) ans -= 2;
                    if(j > 0 && grid[i][j-1]) ans -= 2;
                }     
        return ans;
        /*int rows = grid.size();
        int columns = grid[0].size();
        int ans = 0;
        
        for(int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){
                if(grid[i][j]==1){
                    
                    if(j+1>=columns || (j+1>columns and grid[i][j+1]==0)) ans++;
                    if(j-1<0 || (j-1>=0 and grid[i][j-1]==0)) ans++;
                    if(i+1>=rows || (i+1<rows and grid[i+1][j]==0)) ans++;
                    if(i-1<0 || (i-1>=0 and grid[i-1][j]==0)) ans++;
                }
            }
        }
        return ans;*/
    }
};
