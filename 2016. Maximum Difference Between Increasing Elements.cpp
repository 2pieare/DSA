class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int mini = nums[0];
        for(int i=0; i<n; i++){
            maxi=max(maxi,nums[i]-mini);
            mini=min(mini,nums[i]);
        }
        return maxi>0 ? maxi:-1;
    }
};
