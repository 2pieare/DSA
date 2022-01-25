class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && not (n & n - 1);
        //n & n-1 removes last 1 in binary form of n. a number which is a power //of 2 can be represented as 0....1...00 
    }
};
