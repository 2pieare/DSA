class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        if(target == 1) return 0;
        
        if(maxDoubles){
            return minMoves(target/2, maxDoubles-1)+1+target%2;
        }
        return target-1;
    }
};
