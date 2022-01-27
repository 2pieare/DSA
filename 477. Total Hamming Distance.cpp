class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<32; i++){
            int ones = 0;
            int zeroes = 0;
            for(int x : nums){
                if((x & (1 << i)) > 0) ones++;
                else zeroes++;
            }
            ans += ones*zeroes;
        }
        return ans;
    }
};
