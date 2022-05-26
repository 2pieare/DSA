class Solution {
public:
    bool palindrome(string &news){
        int start = 0;
        int end = news.length()-1;
        bool flag = true;
        while(start<=end){
            if(news[start] != news[end]){
                flag = false;
                break;
            }
            start++;
            end--;
        }
        return flag;
    }
    
    bool isPalindrome(string s) {
        if(s.size() == 0) return true;
        string news = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] >= 65 && s[i] <= 90){
                news += tolower(s[i]);
            }
            if(s[i] >= 48 && s[i] <= 57){
                news += s[i];
            }
            if(s[i] > 96 && s[i] < 123){
                news += s[i];
            }
        }
        cout << news;
        return palindrome(news);
    }
};
