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
    int target;
    
    bool inorder(TreeNode* root, int sum){
        if( root == nullptr ) return false;
        sum += root->val;
        if(root->left == NULL && root->right == NULL){
            return sum == target;
        }
        return inorder(root->left, sum) || inorder(root->right, sum);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        target = targetSum;
        return inorder(root, 0);
    }
};
