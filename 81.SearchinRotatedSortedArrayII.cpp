class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n-1;
        int first = nums[0];
        if (n==0) return false;
        
        while(lo<=hi){
            while(lo<hi && nums[lo]==nums[hi]){
                lo++;
            }
            int mid = lo+(hi-lo)/2;
            if(nums[lo]==target || nums[hi]==target || nums[mid]==target){
                return true;
            }
            if(nums[lo]<=nums[mid]){
                if(nums[lo]<=target && target<nums[mid]){
                    hi = mid-1;
                }else{
                    lo = mid+1;
                }
            }else if(nums[mid]<=nums[hi]){
                if(nums[mid]<target && target<=nums[hi]){
                    lo=mid+1;
                }else{
                    hi=mid-1;
                }
            }else{
                lo++;
            }
        }
        return false;
    }
};
