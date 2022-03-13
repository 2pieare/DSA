class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        map<char, int> mp1;
        for(auto& c:licensePlate){
            if(isalpha(c))
                mp1[tolower(c)]++;
        }
        
        string res = "";
        
        for(auto& word:words){
            map<char, int> mp2;
            for(char& w : word){
                if(isalpha(w))
                    mp2[tolower(w)]++;
            }
            int flag = 1;
            for(auto e:mp1){
                if(mp2[e.first] < e.second) flag = 0;
            }
            if(flag){
                if(res=="") res = word;
                else if(res.size() > word.size()) res = word;
            }
        }
        return res;
    }
};
