class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        int size1 = s1.size();
        int size2 = s2.size();
        if(size1 > size2) return false;
        
        int left = 0, right = 0;
        while(right<size1){
            hash1[s1[right]-'a']+=1;
            hash2[s2[right]-'a']+=1;
            right+=1;
        }
        right-=1;
        while(right<size2){
            if(hash1 == hash2) 
                return true;
            right+=1;
            if(right != size2)
                hash2[s2[right]-'a']+=1;
                hash2[s2[left]-'a']-=1;
            left++;
        }
        return false;
    }
};
