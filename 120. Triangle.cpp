class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int minsum = 0;
        vector<int> dp(triangle.size(), 0);
        for(int i = triangle.size()-2; i>=0; i--){
            for(int j = 0; j<=i;j++){
                triangle[i][j] = min(triangle[i+1][j], triangle[i+1][j+1]) + triangle[i][j];
            }
        }
        return triangle[0][0];
    }
};
