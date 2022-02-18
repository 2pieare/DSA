class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length()==k) return "0";
        if(k==0) return num;
        
        int n = num.size();
        for(char c:num){
            while(!st.empty() && k>0 && st.top()>c){
                st.pop();
                k-=1;
            }
            if(!st.empty() || c!='0')
                st.push(c);
        }
        
        while(!st.empty() && k--)
            st.pop();
        if(st.empty())
            return "0";
        
        while(!st.empty()){
            num[n-1] = st.top();
            st.pop();
            n--;
        }
        
        return num.substr(n);
    }
};
