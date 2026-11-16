/**
 * Definition for a binary tree node.
 * 1038. Binary Search Tree to Greater Sum Tree
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
    // as it is a balanced binary search tree, sum values are from the right to left, so reverse inorder and counter would solve this
public:
    void reverse_inorder(TreeNode* root,int* prev_sum)
    {
        if(!root)
            return;
        reverse_inorder(root->right,prev_sum);

        root->val = root->val + *prev_sum;

        *prev_sum = root->val;

        reverse_inorder(root->left,prev_sum);
    }

    TreeNode* bstToGst(TreeNode* root) {
        int prev_sum = 0;
        reverse_inorder(root,&prev_sum);
        return root;
    }
};