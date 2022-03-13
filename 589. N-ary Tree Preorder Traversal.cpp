/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    vector<int> res;
public:
    void f(Node* root){
        res.push_back(root->val);
        for(auto& c:root->children){
            f(c);
        }
    }
    
    vector<int> preorder(Node* root) {
        if(root==nullptr) return res;
        f(root);
        return res;
    }
};
