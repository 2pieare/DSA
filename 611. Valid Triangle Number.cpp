class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int ans = 0;
        int n = nums.size();
        
        for(int k=n-1; k>1; k--){
            for(int i=0,j=k-1; i<j; ){
                if(nums[i]+nums[j]>nums[k]){
                    ans += j-i;
                    j--;
                }else 
                    i++;
            }
        }
        return ans;
    }
};
