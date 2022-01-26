class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int n = nums.size();
        
        int noofzeroes = 0;
        int totalproduct = 1;
        int prod_nonzero = 1;
        
        for(auto x:nums){
            totalproduct *= x;
            if(x==0) noofzeroes++;
            else prod_nonzero *= x;
        }
        
        vector<int> answer;
        
        for(int i=0; i<n; i++){
            if(noofzeroes > 1){
                answer.push_back(0);
            }else if(noofzeroes == 1){
                if(nums[i] == 0){
                    answer.push_back(prod_nonzero);
                }else{
                    answer.push_back(0);
                }
            }else{
                answer.push_back(prod_nonzero / nums[i]);
            }
        }
        
        return answer;
    }
};
