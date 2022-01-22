class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int arrayans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            arrayans += nums[i];
        }
        int trueans = (n * (n+1)) / 2;
        
        return (trueans - arrayans);
    }
};
