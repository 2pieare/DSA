class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        int mid;
        int first = nums[0];
        if(n==0) return -1;
        
        while(low<=high){
            mid = low + (high - low) / 2;
            int value = nums[mid];
            if(value == target){
                return mid;
            }
            bool am_big = value >= first;
            bool tar_big = target >= first;
            if(am_big == tar_big){
                if(target > value){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }else{
                if(am_big){
                    low =mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};
