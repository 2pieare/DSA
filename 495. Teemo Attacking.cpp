class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0;
        for(int i=0; i<timeSeries.size(); i++){
            ans += (i>0 && timeSeries[i]-timeSeries[i-1] < duration ? timeSeries[i]-timeSeries[i-1] : duration);
        }
        return ans;
    }
};
