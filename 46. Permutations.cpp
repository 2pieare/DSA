class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> r;
        dfs(res, 0, r, nums);
        return res;
    }
    
    void dfs(vector<vector<int>> &res, int level, vector<int> &r, vector<int>& nums){
        if(level == nums.size()){
            res.push_back(r);
        }
        else{
            for(int i = level; i < nums.size(); i++){
                r.push_back(nums[i]);
                swap(nums[i], nums[level]);
                dfs(res, level + 1, r, nums);
                r.pop_back();
                swap(nums[i], nums[level]);
            }
        }
    }
};
