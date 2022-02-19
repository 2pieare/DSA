class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        
        long long n = abs(dividend), d = abs(divisor), ans = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1:1;
        while(n>=d){
            long long temp = d, m = 1;
            while(temp<<1 <= n){
                temp <<= 1;
                m <<= 1;
            }
            n -= temp;
            ans += m;
        }
        return sign*ans;
    }
};

/*
1010
0011
-->0011

0111
0011
-->0010

1010
0100
-->0010
*/
