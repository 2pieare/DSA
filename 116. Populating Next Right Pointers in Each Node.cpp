/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        /*if(root==NULL) return NULL;
        if(root->left != NULL) root->left->next = root->right;
        if(root->right != NULL && root->next != NULL) root->right->next = root->left;
        connect(root->left);
        connect(root->right);
        return root;*/
        
        
        //iterative-------------------------
        
        Node *prev = root, *curr;
        while (prev) {
            curr = prev;
            while (curr && curr->left) { 
                //connects left subtree of same level with right subtree of same level 
                curr->left->next = curr->right;
                
                //connect rightmost node of a level to leftmost node of the next level.
                if (curr -> next) curr->right->next = curr->next->left;
                curr = curr->next;
            }
            prev = prev -> left;
        }
        return root;

    }
};
