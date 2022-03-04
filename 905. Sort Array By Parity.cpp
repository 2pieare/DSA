class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int ind = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 == 0){
                int temp = nums[ind];
                nums[ind++] = nums[i];
                nums[i] = temp;
            }
        }
        return nums;
        
        /* O(n) --> space and time complexity
        
        vector<int> sorted;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 == 0)
                sorted.push_back(nums[i]);
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 != 0)
                sorted.push_back(nums[i]);
        }
        return sorted;
        
        */
    }
};
