class Solution {
public:
    void combination(vector<int>& candidates, int target, vector<int> temp, int currsum, int currindex, vector<vector<int>> &ans){
        if(currsum > target){
            return;
        }
        if(currsum == target){
            ans.push_back(temp);
        }
        
        for(int i=currindex; i<candidates.size(); ++i){
            temp.push_back(candidates[i]);
            currsum += candidates[i];
            combination(candidates, target, temp, currsum, i, ans);
            temp.pop_back();
            currsum -= candidates[i];
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        combination(candidates, target, temp, 0, 0, ans);
        return ans;
    }
};
