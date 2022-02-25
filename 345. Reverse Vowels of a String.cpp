class Solution {
public:
    bool isvowel(char ch){
        ch = tolower(ch);
        return (ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u');
    }
    
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0, j = n;
        while(i<j){
            while(i<n && !isvowel(s[i])){
                i++;
            }
            while(j>=0 && !isvowel(s[j])){
                j--;
            }
            if(i>=j) break;
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
};
