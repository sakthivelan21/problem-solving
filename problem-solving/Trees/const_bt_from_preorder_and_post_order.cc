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

    TreeNode* buildT(vector<int>& inorder,vector<int>& postorder,unordered_map<int,int> &in_map,int in_ind,int in_size,int post_ind,int post_end) {
        if(in_ind>in_size ||  post_ind>post_end) {
            return nullptr;
        }

        int ind = in_map[postorder[post_end]];

        TreeNode* root = new TreeNode(postorder[post_end]);

        int left_count = ind - in_ind;

        root->left = buildT(inorder,postorder,in_map,in_ind,ind-1,post_ind ,post_ind+left_count-1);
        root->right = buildT(inorder,postorder,in_map,ind+1,in_size,post_ind + left_count,post_end-1);

        return root;
    }


    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> in_map;

        for(int i=0;i<inorder.size();i++) {
            in_map[inorder[i]] = i;
        }

        return buildT(inorder,postorder,in_map,0,inorder.size()-1,0,postorder.size()-1);
    }
};