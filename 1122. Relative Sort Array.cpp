class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int> finalans;
        map<int, int> mp;
        for(int x:arr1){
            mp[x]++;
        }
        for(int y:arr2){
            if(mp.find(y) != mp.end()){
                for(int i=0; i<mp[y]; i++){
                    finalans.push_back(y);
                }
                mp[y] = 0;
            }
        }
        for(auto k:mp){
            if(k.second > 0){
                for(int i=0; i<k.second; i++) finalans.push_back(k.first);
            }
        }
        
        return finalans;
    }
};
