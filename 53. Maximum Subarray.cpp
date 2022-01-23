class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int final= INT_MIN, running=0;
        for(int i=0; i<nums.size(); i++){
            running = running + nums[i];
            if(final < running)
                final = running;
            if(running <0)
                running = 0;
        }
    return final;
    }
};
