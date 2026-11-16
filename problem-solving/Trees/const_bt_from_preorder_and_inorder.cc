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

    TreeNode* buildT(vector<int> &preorder,vector<int> &inorder,unordered_map<int,int> &in_map,int preIndex,int preSize, int inIndex,int inSize) {
        if(preIndex>=preSize || inIndex>inSize) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(preorder[preIndex]);
        int in_ind = in_map[preorder[preIndex]];

        root->left= buildT(preorder,inorder,in_map,preIndex+1,preSize, inIndex , in_ind-1 );

        root->right = buildT(preorder,inorder,in_map,preIndex+1+in_ind- inIndex,preSize,in_ind+1 , inSize );
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> map;

        for(int i=0;i<inorder.size();i++)
            map[inorder[i]] = i;

        return buildT(preorder,inorder,map,0,preorder.size(),0,inorder.size());   
    }
};