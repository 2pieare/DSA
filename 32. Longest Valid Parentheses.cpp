class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> open;
        open.push(-1);
        
        int ans = 0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                open.push(i);
            }else{
                open.pop();
                if(open.empty()) open.push(i);
                else ans=max(ans, i-open.top());
            }
        }
        return ans;
    }
};
