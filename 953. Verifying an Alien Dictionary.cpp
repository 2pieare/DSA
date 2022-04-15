class Solution {
    int a[26] = {0};
    
    const bool compare(const string &s, const string &t){
        int n = s.size();
        int m = t.size();
        int k = min(n,m);
        
        if(s.substr(0,k) == t.substr(0,k)) return n<=m;
        
        for(int i=0; i<k; i++){
            if(s[i] == t[i]) continue;
            else if(a[s[i] -'a'] > a[t[i]-'a']) return false;
            else return true;
        }
        return true;
    }
    
public:
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0; i<26; i++){
            a[order[i]-'a'] = i;
        }
        int n = words.size();
        for(int i=1; i<n; i++){
            if(!(compare(words[i-1], words[i]))) return false;
        }
        return true;
    }
};
