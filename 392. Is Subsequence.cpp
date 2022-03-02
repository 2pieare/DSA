class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        
        if(n1 > n2){
            return false;
        }
        
        if(n1 == 0 && n2 == 0){
            return true;
        }
        
        int j = 0;
        bool find = false; 
        
        for(int i = 0; i < n2; i++){
            if(t[i] == s[j]){
                j++;
            }
            if(j == n1){
                find = true;
                break;
            }
        }
        
        return find;
    }
};
