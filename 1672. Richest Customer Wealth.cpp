class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int globalmax = 0;
        for(int i=0; i<accounts.size(); i++){
            int localmax = 0;
            for(int j=0; j<accounts[i].size(); j++){
                localmax += accounts[i][j];
            }
            if(localmax > globalmax) globalmax = localmax;
        }
        return globalmax;
    }
};
