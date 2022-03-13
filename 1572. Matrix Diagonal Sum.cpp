class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i=0;
        int sum = 0;
        while(i<mat.size()){
            sum += mat[i][i] + mat[i][mat.size()-1-i];
            if(i == mat.size()-1-i) sum -= mat[i][i];
            i++;
        }
        return sum;
    }
};
