class Trie {
private:
    Trie* children[26];
    bool flag;
public:
    Trie() {
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        flag = false;
    }
    
    void insert(string word) {
        int n = word.size();
        Trie* temp = this;
        int ind;
        for(int i=0; i<n; i++){
            ind = word[i]-'a';
            if(temp->children[ind] == NULL){
                temp->children[ind] = new Trie();
            }
            temp = temp->children[ind];
        }
        temp->flag = true;
        return;
    }
    
    bool search(string word) {
        int n = word.size();
        Trie* temp = this;
        int ind;
        for(int i=0; i<n; i++){
            ind = word[i]-'a';
            if(temp->children[ind] == NULL)
                return false;
            temp = temp->children[ind];
        }
        return temp->flag;
    }
    
    bool startsWith(string prefix) {
        int n = prefix.size();
        int ind ;
        Trie* temp = this ;
        
        for(int i=0;i<=n;i++){
            ind = prefix[i]-'a';
            if( i == n )
                return true ;
            if( temp->children[ind] == NULL )
                return false ;
            
            temp=temp->children[ind];
        }
        return false ;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */


/* 

100% fast
class Trie {
    Trie* next[26];
    bool isLast;
public:
    Trie() {
        for(int i=0;i<26;++i){
            next[i]=nullptr;
        }
        isLast =false;
    }
    
    void insert(string word) {
        Trie* curr=this;
        for(char i : word){
            if(curr->next[i-'a'] == nullptr) curr->next[i-'a'] = new Trie();
            curr=curr->next[i-'a'];
        }
        curr->isLast=true;
    }
    
    bool search(string word) {
        Trie* curr = this;
        for(char i: word){
            if(curr->next[i-'a'] ==nullptr) return false;
            curr = curr->next[i-'a'];
        }
        return curr->isLast;
    }
    
    bool startsWith(string prefix) {
        Trie* curr = this;
        for(char i: prefix){
            if(curr->next[i-'a'] ==nullptr) return false;
            curr = curr->next[i-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
*/


