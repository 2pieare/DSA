class NumMatrix {
public:
    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        prefix = vector<vector<int>>(n+1, vector<int>(m+1, 0));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + matrix[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefix[row2+1][col2+1] - prefix[row1][col2+1] - prefix[row2+1][col1] + prefix[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */

/*
Using rows as a prefix sum 
In each row of matrix we store the sum of that row till that column. And while returning we return the sum of that row till final column - sum of that row before initial column.
i.e, For this matrix we store

1  2  3                      1  3  6
4  1  2           ->         4  5  7
1  2  1                      1  3  4

class NumMatrix {
public:
    vector<vector<int>> mat;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(),n = matrix[0].size();
        for(int i = 0 ; i < m; i++){
            vector<int> row(n);
            row[0] = matrix[i][0];
            for(int j = 1 ; j < n; j++){
                row[j] = row[j-1] + matrix[i][j];
            }
            mat.push_back(row);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0,minus = 0;
        for(int i = row1 ; i <= row2; i++){
            sum += mat[i][col2];
            if(col1 > 0)
                minus += mat[i][col1-1];
        }
        return sum - minus;
    }
};
*/
