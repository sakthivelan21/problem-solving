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
    // post_order traversal for bottom up approach and
    // calculate the height of the tree to check if it's balanced from bottomup
    int dfs(TreeNode* root) {
        if(!root)
            return 0;
        int left_val = dfs(root->left);
        if(left_val==-1)
            return -1;
        int right_val = dfs(root->right);
        if(right_val==-1)
            return -1;
        
        if(abs(right_val-left_val)>1)   
            return -1;
        // trick i missed
        return max(right_val,left_val)+1;
    }
    bool isBalanced(TreeNode* root) {
        return dfs(root)!=-1;
    }
};