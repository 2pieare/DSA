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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        /*
        recursive
        
        if(!root){
            return NULL;
        }
            
        if(root->val < low){
            root->left = NULL;
            return trimBST(root->right, low, high);
        }else if(root->val > high){
            root->right = NULL;
            return trimBST(root->left, low, high);
        }
        
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);
        return root;
        */
        TreeNode* current = root;
        while(current){
            if(current->val < low){
                current = current -> right;
            }else if(current->val > high){
                current = current->left;
            }else{
                break;
            }
        }
        
        while(!current) return current;
        
        TreeNode* newroot = current;
        while(current->left){
            TreeNode* l = current->left;
            if(l->val < low){
                current -> left = l -> right;
            }else{
                current = l;
            }
        }
        
        current = newroot;
        while(current->right){
            TreeNode* r = current->right;
            if(r->val > high){
                current->right = r->left;
            }else{
                current = r;
            }
        }
        return newroot;
    }
};
