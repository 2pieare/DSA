class Solution {
public:
    int mySqrt(int x) {
        long long int left = 1, right = x;
        int ans;
        while(left<=right){
            long long mid = left + (right-left)/2;
            if(mid*mid <= x){
                left = mid+1;
                ans = mid;
            }
            else right = mid-1;
        }
        return ans;
    }
};
