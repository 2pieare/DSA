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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
        int ans = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        while(!q.empty()){
            int size = q.size();
            int minatlevel = q.front().second;
            int mn, mx;
            for(int i=0; i<size; i++){
                int currindex = q.front().second - minatlevel + 1;
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0) mn = currindex;
                if(i==size-1) mx = currindex;
                if(node->left != nullptr) q.push({node->left, (long long)2*currindex});
                if(node->right != nullptr) q.push({node->right, (long long)2*currindex+1});
            }
            ans = max(ans, mx-mn+1);
        }
        return ans;
    }
};
