class Solution {
public:
    int binaryGap(int n) {
        int lastoneseen = -1;
        int maxdist = 0;
        int currentoneseen = 0;
        while(n){
            if(n&1){
                if(lastoneseen >= 0){
                    maxdist = max(maxdist, currentoneseen - lastoneseen);
                }
                lastoneseen = currentoneseen;
            }
            ++currentoneseen;
            n >>= 1;
        }
        return maxdist;
    }
};
