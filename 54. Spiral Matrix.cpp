class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> ans;
        int rows = m.size();
        int cols = m[0].size();
        
        int rowstart = 0, rowend = rows-1;
        int colstart = 0, colend = cols-1;
        
        while(rowstart <= rowend and colstart <= colend){
            //right
            for(int i=colstart; i<=colend; i++){
                ans.push_back(m[rowstart][i]);
            }
            rowstart++;
            
            //down
            for(int j=rowstart; j<=rowend; j++){
                ans.push_back(m[j][colend]);
            }
            colend--;
            
            //left
            if(rowstart<=rowend){
                for(int k=colend; k>=colstart; k--){
                    ans.push_back(m[rowend][k]);
                }
                rowend--;
            }
            
            //up
            if(colstart<=colend){
                for(int l=rowend; l>=rowstart; l--){
                    ans.push_back(m[l][colstart]);
                }
                colstart++;
            }
        }
        return ans;
    }
};
