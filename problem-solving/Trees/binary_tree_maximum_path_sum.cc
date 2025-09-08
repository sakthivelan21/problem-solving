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

    int dfs(TreeNode* root,int &result) {
        if(!root)
        {
            return 0;
        }

        int left = dfs(root->left,result);
        int right = dfs(root->right,result);
        //reset on negative value
        left = max(left,0);
        right = max(right,0);

        result = max(result,root->val + left + right);

        // we can choose either of max val from sub tree;
        return root->val + max(left,right);
    }

    int maxPathSum(TreeNode* root) {
       if(!root)
        return 0;
       int result = root->val;
       dfs(root,result);
       return result;
    }
};