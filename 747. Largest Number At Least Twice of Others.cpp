class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        
        int maxelemindex = 0;
        int tempmaxi = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] > tempmaxi){
                maxelemindex = i;
                tempmaxi = nums[i];
            }
        }
        sort(nums.begin(), nums.end());
        if(2*nums[n-2] <= nums[n-1]) return maxelemindex;
        else return -1;
    }
};
