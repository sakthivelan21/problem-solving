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

    bool is_matched(TreeNode* root, TreeNode* subRoot) {
        if(!root && subRoot)
            return false;
        else if(root && !subRoot)
            return false;
        else if(!root && !subRoot)
            return true;
        if(root->val!=subRoot->val)
            return false;
        
        return is_matched(root->left,subRoot->left) && is_matched(root->right,subRoot->right);
    }
    // could have return this part with dfs with || check 
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> q;

        if(!root && subRoot)
            return false;
        q.push(root);

        while(!q.empty()) {
            int val = q.size();
            while(val>0) {
                TreeNode* t = q.front();
                q.pop();

                if(is_matched(t,subRoot))
                    return true;

                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
                val--;
            }
        }

        return false;
    }
};