class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string digits = "123456789";
        int n1 = to_string(low).length();
        int n2 = to_string(high).length();
        
        vector<int> ans;
        
        for(int i=n1; i<=n2; i++){
            for(int j=0; j<10-i; j++){
                int num = stoi(digits.substr(j,i));
                if(num>=low && num<=high) ans.push_back(num);
            }
        }
        return ans;
    }
};
