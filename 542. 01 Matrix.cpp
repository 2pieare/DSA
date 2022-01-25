class Solution {
public:
    bool isValidNeighbour(pair<int, int> n, int row, int column){
        if(n.first < 0 || n.first >= row || n.second < 0 || n.second >= column){
            return false;
        }
        return true;
    }
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row = mat.size();
        int column = mat[0].size();
        vector<vector<int>> distance(row, vector<int>(column, -1));
        queue<pair<int, int>> Q;
        for(int i=0; i<row ; i++){
            for(int j=0; j<column ; j++){
                if(mat[i][j]==0){
                    distance[i][j]=0;
                    Q.push({i, j});
                }
            }
        }
        const int dx[]= {-1, 0, 1, 0};
        const int dy[]= {0, 1, 0, -1};
        while(!Q.empty()){
            pair<int, int> node = Q.front();
            Q.pop();
            for(int d=0; d<4; d++){
                pair<int, int> neighbourOfNode = {node.first + dx[d], node.second+dy[d]};
                if(isValidNeighbour(neighbourOfNode, row, column) && distance[neighbourOfNode.first][neighbourOfNode.second]==-1){
                    distance[neighbourOfNode.first][neighbourOfNode.second] = distance[node.first][node.second] + 1;
                    Q.push(neighbourOfNode);
                }
            } 
        }
        return distance;
    }
};
