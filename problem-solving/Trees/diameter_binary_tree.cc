class Solution {
public:
    int maxDiameter = 0;

    int dfs(TreeNode* root) {
        if (!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        maxDiameter = max(maxDiameter, left + right); // update global max
        return 1 + max(left, right); // return height
    }

    int diameterOfBinaryTree(TreeNode* root) {
        maxDiameter=0;
        dfs(root); // compute and update maxDiameter
        return maxDiameter;
    }
};
