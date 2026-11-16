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

    void dfs(TreeNode* root,int &k,int &cur,int &ans) 
    {
        if(!root || cur>k)
            return ;
        
        dfs(root->left,k,cur,ans);


        // printf("%d cur %d,k %d\n",root->val,cur,k);
        if(cur==k){
            ans = root->val;
            cur++;
            return;
        }

        cur++;

        dfs(root->right,k,cur,ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        int ans,cur=1;
        dfs(root,k,cur,ans);   
        return ans;
    }
};