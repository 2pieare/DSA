class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        /*if(k==0 || (k==1 && nums.size()==1)) return false;
        else{
            vector<pair<int,int>> v;
            for(int i=0; i<nums.size(); i++){
                v.push_back(make_pair(nums[i],i));
            }
            sort(v.begin(), v.end());
            for(int j=0; j<v.size(); j++){
                if((v[j].first==v[j+1].first) && abs(v[j].second-v[j+1].second)<=k)
                    return true;
            }
            return false;
            
        }
        */
        
        unordered_map<int, int> valueatindx;     
            
        for (int i=0; i<nums.size(); ++i) {
            auto it = valueatindx.find(nums[i]);
            if (it == valueatindx.end()) {
                valueatindx.insert(make_pair(nums[i], i));
            } else {
                auto idx = it->second;
                if (abs(idx-i) <= k)
                    return true;
                valueatindx[nums[i]] = i;
            }
        }
        return false;
        
        /*unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                if(abs(mp[nums[i]]-i)<=k) return true;
            }else{
               mp[nums[i]] = i;
            }
        }
        return false;*/
    }
};
