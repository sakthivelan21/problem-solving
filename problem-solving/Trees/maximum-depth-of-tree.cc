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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        int level = 0,len=0;
        if(root)q.push(root);
        while(!q.empty()){
            len = q.size();
            while(len>0) {
                TreeNode* t = q.front();
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
                len--;
                q.pop();
            }
            level++;
        }
        return level;
    }
};