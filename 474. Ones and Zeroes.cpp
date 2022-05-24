class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>> dp(strs.size()+1, vector<vector<int>>(m+1, vector<int>(n+1)));
        
        for(int i=1; i<=strs.size(); i++){
            int countzeroes = count(strs[i-1].begin(), strs[i-1].end(), '0');
            int countones = strs[i-1].size() - countzeroes;
            
            for(int j=0; j<=m; j++){
                for(int k=0; k<=n; k++){
                    if(j-countzeroes>=0 and k-countones>=0)
                        dp[i][j][k] = max(1+dp[i-1][j-countzeroes][k-countones], dp[i-1][j][k]);
                    else dp[i][j][k] = dp[i-1][j][k];
                }
            }
        }
        return dp[strs.size()][m][n];
    }
    /* Top Down
    vector<vector<vector<int>>> dp;
    int findMaxForm(vector<string>& strs, int m, int n) {
        dp.resize(m+1, vector<vector<int>>(n+1, vector<int>(strs.size(), -1)));
        return findmax(strs, m, n, 0);
    }
    
    int findmax(vector<string>& strs, int m, int n, int index){
        if(index == strs.size()) return 0;
        if(dp[m][n][index] != -1) dp[m][n][index];
        
        int countzeroes = count(strs[index].begin(), strs[index].end(), '0');
        int countones = strs[index].size() - countzeroes;
        
        if(m-countzeroes >=0 and n-countones>=0){
            return dp[m][n][index] = max(1+findmax(strs, m-countzeroes, n-countones, index+1),
                    findmax(strs, m, n, index+1));
        }
        
        return dp[m][n][index] = findmax(strs, m, n, index+1);
    */
    
    /* recursive approach
    here we can see that there are 3 parameters deciding the answer -> m, n and index
    when we write down all the function calls we can see that there are many calls getting repeated         thus leading to some extra computation and that's why we get TLE. So to reduce this extra               computation we will memoize the space by using a dp and this dp will be 3d dp due to 3 changing         parameters.
    
    int findmax(vector<string>& strs, int m, int n, int index){
        if(index == strs.size()) return 0;
            
        int countzeroes = count(strs[index].begin(), strs[index].end(), '0');
        int countones = strs[index].size() - countzeroes;
        
        if(m-countzeroes >=0 and n-countones>=0){
            return max(1+findmax(strs, m-countzeroes, n-countones, index+1),
                    findmax(strs, m, n, index+1));
        }
        
        return findmax(strs, m, n, index+1);
    */
    
};
