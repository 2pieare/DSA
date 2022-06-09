class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        
        int first = 0;
        int second = 0;
        
        int fsize = firstList.size();
        int ssize = secondList.size();
        
        while(first < fsize and second < ssize){
            if(firstList[first][0]<=secondList[second][1] and secondList[second][0]<=firstList[first][1]){
                int temp = max(firstList[first][0], secondList[second][0]);
                int tempp = min(firstList[first][1], secondList[second][1]);
                ans.push_back({temp, tempp});
            }
            if(firstList[first][1] > secondList[second][1]){
                second++;
            }else{
                first++;
            }
        }
        return ans;
    }
};
