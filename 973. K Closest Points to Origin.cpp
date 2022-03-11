class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;
        
        for(int i=0; i<points.size(); i++){
            int x = points[i][0];
            int y = points[i][1];
            int dist = (pow(x,2)+pow(y,2));
            cout << dist << " ";
            pq.push({dist,i});
        }

        vector<vector<int>> v;

        while(k--){
            auto [dist,i] = pq.top();
            v.push_back(points[i]);
            pq.pop();
        }

        return v;
    }
};
