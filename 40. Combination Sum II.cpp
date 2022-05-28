class Solution {
public:
    void combination(vector<int>& candidates, int target, int ind, vector<vector<int>> &ds,
vector<int> &ans){
        if(target == 0){
            ds.push_back(ans);
            return;
        }
         
        for(int i=ind; i<candidates.size(); i++){
            if(i>ind and candidates[i]==candidates[i-1]) continue;
            if(candidates[i] > target) break; //as the candidates array is sorted if one element is bigger than target then moving ahead is pointless as we will not get anything of use
            ans.push_back(candidates[i]);
            combination(candidates, target-candidates[i], i+1, ds, ans);
            ans.pop_back();
        }
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ds;
        vector<int> ans;
        combination(candidates, target, 0, ds, ans);
        return ds;
    }
};
