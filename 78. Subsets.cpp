class Solution {
public:
    //bit manipulation
    void calc(int i,vector<vector<int>> &result, vector<int>& nums){
        vector<int> temp;
        int j = 0;
        while(i>0){
            if((i&1)==1) temp.push_back(nums[j]);
            j++;
            i = i>>1;
        }
        result.push_back(temp);
        return;
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        for(int i=0; i < (1<<n); i++){
            calc(i,result,nums);
        }
        return result;
    }
};
