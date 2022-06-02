class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> finalone;
        vector<string> indi;
        solve(0, s, finalone, indi);
        return finalone;
    }
    
    void solve(int ind, string s, vector<vector<string>> &finalone, vector<string> &indi){
        if(ind == s.size()){
            finalone.push_back(indi);
            return;
        }
        
        for(int i=ind; i<s.size(); i++){
            if(isPalindrome(s, ind, i)){
                indi.push_back(s.substr(ind, i-ind+1));
                solve(i+1, s, finalone, indi);
                indi.pop_back();
            }
        }
    }
    
    bool isPalindrome(string s, int start, int end){
        while(start<=end){
            if(s[start++] != s[end--]) return false;
        }
        return true;
    }
};
