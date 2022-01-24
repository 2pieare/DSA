class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int res = 0, start = 0, finish = n - 1, startCopy = 0, finishCopy = n - 1;;
        
        while (colors[start] == colors[finishCopy])
            start++;
        while (colors[startCopy] == colors[finish])
            finish--;
        
        res = max((finishCopy - start), (finish - startCopy));
        
        return res;
        /*
        if(colors.size() == 2) return 1;
        
        int start = 0;
        int end = colors.size()-1;
        int ans1 = 0, ans2= 0;
        while(end>=start){
            if(colors[start] != colors[end]){
                int d1 = abs(end - start);
                ans1 = max(ans1,d1);
            }
            end--;
        }
        start = 0, end = colors.size()-1;
        while(end>=start){
            if(colors[start] != colors[end]){
                int d2 = abs(end - start);
                ans2 = max(ans2,d2);
            }
            start++;
        }
        return max(ans1,ans2);
        */
    }
};
