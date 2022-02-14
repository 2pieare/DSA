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
    int height(TreeNode* root){
        if(root==nullptr) return 0;
        return 1+max(height(root->left), height(root->right));
    }
    
    bool isBalanced(TreeNode* root) {
        TreeNode* temp = root;
        if(temp!=nullptr){
            int left = height(temp->left);
            int right = height(temp->right);
            
            if(abs(left-right) > 1){
                return false;
            }
            if(isBalanced(temp->right)==false){
                return false;
            }
            if(isBalanced(temp->left)==false){
                return false;
            }
        }
        return true;
    }
};
