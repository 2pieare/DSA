class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k - (k/nums.size())*nums.size();
        reverse(nums, 0, nums.size()-k-1);
        reverse(nums, nums.size()-k, nums.size()-1);
        reverse(nums, 0, nums.size()-1);
    }
    
    void reverse(vector<int> &nums, int lo, int hi){
        while(lo<hi){
            swap(nums[lo], nums[hi]);
            lo++;
            hi--;
        }
    }
};
