class Solution {
public:
    bool divider(int num){
        int temp = num;
        while(num){
            int t = num%10;
            if(t == 0) return false;
            if(temp%t != 0) return false;
            num /= 10;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++){
            if(divider(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
