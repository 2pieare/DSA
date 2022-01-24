class Solution {
public:
    int countElements(vector<int>& nums) {
        int strictcounter = 0;
        for(int i=0; i<nums.size();i++){
            bool lesser = false;
            bool bigger = false;
            for(int j=0; j<nums.size(); j++){
                if(nums[i] < nums[j]) bigger = true;
                if(nums[i] > nums[j]) lesser = true;
                if(bigger and lesser){
                    strictcounter++;
                    break;
                }
            }
        }
        return strictcounter;
    }
};
