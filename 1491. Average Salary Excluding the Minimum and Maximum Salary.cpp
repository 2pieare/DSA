class Solution {
public:
    double average(vector<int>& salary) {
        double ans;
        int deno = salary.size()-2;
        sort(salary.begin(), salary.end());
        for(int i=1; i<salary.size()-1; i++){
            ans+=salary[i];
        }
        return ans/deno;
    }
};
