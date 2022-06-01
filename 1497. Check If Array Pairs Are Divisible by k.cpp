class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> rem(k);
        for(auto &x : arr) rem[(x%k + k)%k]++;
        
        if(rem[0] % 2) return false;
        
        for(int i=1; i<rem.size(); i++){
            if(rem[i] != rem[k-i]) return false;
        }
        return 1;
    }
};
