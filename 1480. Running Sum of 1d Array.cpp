class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int run_sum = 0;
        for(int i=0; i<n; i++){
            run_sum += nums[i];
            ans.push_back(run_sum);
        }
        return ans;
    }
};
