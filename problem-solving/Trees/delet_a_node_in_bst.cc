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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) {
            return root;
        }

        if(root->val>key) {
            root->left = deleteNode(root->left,key);
        }
        else if(root->val<key)
        {
           root->right= deleteNode(root->right,key);
        }
        else {
            if(!root->left && !root->right) {
                delete root;
                return nullptr;
            }
            if(!root->left)
            {   
                TreeNode* t = root->right;
                delete root;
                return t;
            }
            else if(!root->right)
            {
               TreeNode* t = root->left;
                delete root;
                return t;
            }

            // pick a small node from right to make bst consistent
            TreeNode* cur = root->right;

            while(cur->left) {
                cur=cur->left;
            }
            root->val = cur->val;
            // deleting replaced node val recursively 
            // since it might have same child concept we are leaving to be recursive
            root->right = deleteNode(root->right,root->val);
        }

        return root;
    }
};