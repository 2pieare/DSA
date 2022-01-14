class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        //ans 2
        map<int,int>mp;
        set<int>s;
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        int rank=1;
        for(auto &i:s){
            mp[i]=rank;
            rank++;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mp[arr[i]];
        }
        return arr;
        
        //-----------------------------------------------
        
        /*ans 3
        map <int, int> mp;
        for(auto &it: arr)
            mp[it] = 0;
        int rank = 0;
        for(auto &it: mp)
            mp[it.first] = ++rank;
        for(int i = 0; i < arr.size(); i++)
            arr[i] = mp[arr[i]];
        return arr;
        */
        
        //-----------------------------------------------
        
        /*ans 1
        int n = arr.size();
        vector<int> ans(n,0);
        vector<pair<int,int>> p;
        for(int i=0; i<n; i++){
            p.push_back({arr[i], i});
        }
        
        sort(p.begin(), p.end(), [](pair<int,int>a, pair<int,int>b){
            return a.first < b.first;
        });
        
        int rank = 1;
        for(int i=0; i<n; i++){
            if(i!=0 && p[i].first==p[i-1].first){
                ans[p[i].second]=rank-1;
            }else{
                ans[p[i].second]=rank;
                rank++;
            }
        }
        return ans;
        */
        
    }
};
