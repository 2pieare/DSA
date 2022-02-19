class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        int m = 5;
        while(n/m){
            ans += n/m;
            m *= 5;
        }
        return ans;
    }
};
