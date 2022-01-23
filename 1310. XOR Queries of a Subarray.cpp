class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> pre(n);
        
        pre[0] = arr[0];
        
        for(int i=1; i<n; i++){
            pre[i]=pre[i-1]^arr[i];
        }    
        
        vector<int> ans;
        for(int i=0; i<queries.size(); i++){
            int resxor;
            if(queries[i][0]==0)
                resxor = pre[queries[i][1]];
            else
                resxor = pre[queries[i][1]]^pre[queries[i][0]-1];
            
            ans.push_back(resxor);
        }
        return ans;
    }
};
