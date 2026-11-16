class Solution {
public:

    void dfs(TreeNode* root,vector<int> &result){
        if(!root)
            return;
        result.push_back(root->val);
        dfs(root->left,result);
        dfs(root->right,result);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;

        dfs(root,result);

        return result;
    }
};