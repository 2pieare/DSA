#Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.
#Each letter in magazine can only be used once in ransomNote.


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>mp(26,0);
        for(int i=0; i<ransomNote.size(); i++){
                mp[ransomNote[i]-'a']++;       
        }
        for(int j=0; j<magazine.size(); j++){
                mp[magazine[j]-'a']--;
        }
        for(int i=0;i<26; i++){
            if(mp[i] > 0) return false;
        }
        return true;
    }
};
