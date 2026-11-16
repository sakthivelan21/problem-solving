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

    void dfs(TreeNode* root, int &result,int max_val){
        if(!root)
            return;
        if(root->val>=max_val)  
            result++;
        max_val = max(root->val,max_val);
        dfs(root->left,result,max_val);
        dfs(root->right,result,max_val);
    }

    int goodNodes(TreeNode* root) {
        int result = 0;
        if(!root)
            return result;
        dfs(root,result,root->val);
        return result;
    }
};