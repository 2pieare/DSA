class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp(numRows, vector<int>(numRows,0));
        
        for(int i=0; i<numRows; i++){
            for(int j=0; j<=i; j++){
                if(j==0) dp[i][j] = 1;
                else if(i==j) dp[i][j] = 1;
                else dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
            }
        }
        
        vector<vector<int>> res;
        for(int i=0; i<numRows; i++){
            vector<int> temp;
            for(int j=0; j<=i; j++){
                temp.push_back(dp[i][j]);
            }
            res.push_back(temp);
        }
        return res;
    }
};

/*
0,0 - 1 ( i from 0 to numRows)
        (i,0 will be 1 and i,i will be 1)
1,0 - 1
1,1 - 1
    
    2,0 - 1
    2,1 - 2 //1,0 + 1,1 - i-1,j-1 + i-1,j
    2,2 - 1
    
    3,0 - 1
    3,1 - 3//2,0 + 2,1
    3,2 - 3//2,1 + 2,2
    3,3 - 1
    
    4,0 - 1
    4,1 - 4
    4,2 - 6
    4,3 - 4
    4,4 - 1
 */   
