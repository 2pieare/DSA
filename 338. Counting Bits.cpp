class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bitsofnumber;
        bitsofnumber.push_back(0);
        for(int i=1;i<=n;i++){
            bitsofnumber.push_back(bitsofnumber[i & i-1]+1);
        }
        return bitsofnumber;
    }
};
