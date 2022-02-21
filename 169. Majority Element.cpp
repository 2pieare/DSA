class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's Voting Algo
        int candidate = nums[0];
        int count = 1;
        
        for(auto num:nums){
            if(num == candidate) count++;
            else count--;
            
            if(count==0){
                candidate = num;
                count = 1;
            }
        }
        return candidate;
        
        //another way - sort nums and return middle element
        //another way - use hashmaps to store frequencies
        //brute force - count each numbers freq
    }
};
