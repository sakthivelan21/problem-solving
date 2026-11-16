/**
 * 222. Count Complete Tree Nodes leetcode
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
    int leftHeight(TreeNode* root)
    {
        if(!root)
            return 0;
        return leftHeight(root->left) + 1;
    }
    int rightHeight(TreeNode* root)
    {
        if(!root)
            return 0;
        return rightHeight(root->right) + 1;
    }
    int countNodes(TreeNode* root) {
        int left = 0,right = 0;

        if(!root)
            return 0;
        
        left = leftHeight(root);
        right = rightHeight(root);

        if(left==right)
            return pow(2,left) - 1;
        
        return countNodes(root->left) + countNodes(root->right)+1;
    }
};