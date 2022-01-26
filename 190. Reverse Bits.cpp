class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reverse = 0;
        uint32_t power = 31;
        while(n){
            reverse += (n&1)<<power;
            n >>= 1;
            power--;
        }
        return reverse;
    }
};
