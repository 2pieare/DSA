class Solution {
public:
    void solve(string digits, string s, int ind, vector<string> &ans, string mapp[]){
        if(ind >= digits.length()){
            ans.push_back(s);
            return;
        }
        
        int num = digits[ind] - '0';
        string correspondingLetters = mapp[num];
        for(int i=0; i<correspondingLetters.length(); i++){
            s.push_back(correspondingLetters[i]);
            solve(digits, s, ind+1, ans, mapp);
            s.pop_back();
        }
    }
    
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0){
            return ans;
        }
        
        string s;
        string mapp[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, s, 0, ans, mapp);
        return ans;
    }
};
