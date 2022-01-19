class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> save(256,-1);
        int ans = 0, count = 0, start = -1;
        if(s.size()==1) return 1;
        for(int i=0; i<s.length(); i++){
            if(save[s[i]] > start){
                start = save[s[i]];
            }
            save[s[i]]=i;
            count = (i-start);
            ans = max(ans, count);
        }
        return ans;
        
        /*
        vector<int> mpp(255,-1);
        int left = 0, right = 0;
        int n = s.size();
        int len = 0;
        while(right<n){
            if(mpp[s[right]] != -1) left = max(mpp[s[right]]+1, left);
            mpp[s[right]] = right;
            len = max(len, right - left +1);
            right++;
        }
        return len;
        */
    }
};
