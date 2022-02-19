class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        if (finalSum%2 != 0) {return {};}
        
        long long num = finalSum/2;
        vector<long long> ans;
        int i{1};
        while (num > 0){
            ans.push_back(i);
            num -= i;
            if (num < i+1 && num > 0){
                ans[ans.size()-1] += num;
                break;
            }
            i++;
        }
        for(int i{0}; i < ans.size(); ++i){
            ans[i] *= 2;
        }
        return ans;
    }
};
