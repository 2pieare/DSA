class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        int result = x^y;
        while(result>0){
            count += result & 1;
            result >>= 1;
        }
        return count;
        
        //using built-in 
        // return bitset<32>(x^y).count();
    }
};
