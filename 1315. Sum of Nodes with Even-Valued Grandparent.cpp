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
    int sumEvenGrandparent(TreeNode* root) {
        queue<TreeNode* > q;
        q.push(root);
        int sum = 0;
        
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            
            if(temp->val % 2 == 0){
                if(temp->left != nullptr and temp->left->left != nullptr) 
                    sum += temp->left->left->val;
                    
                if(temp->left != nullptr and temp->left->right != nullptr)
                    sum += temp->left->right->val;

                if(temp->right != nullptr and temp->right->left != nullptr)
                    sum += temp->right->left->val;

                if(temp->right != nullptr and temp->right->right != nullptr)
                    sum += temp->right->right->val;
                
            }
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        return sum;
    }
};
