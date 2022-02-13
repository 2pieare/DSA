/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solver(TreeNode* p, TreeNode* q){
        if(p == NULL and q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        return solver(p->left, q->left) and solver(p->right, q->right);
    }
    
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL and q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        return solver(p,q);
    }
};
