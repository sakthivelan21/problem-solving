/** 1382. Balance a Binary Search Tree
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
    // as it is a binary search tree, if we traverse from the left, we
    // can make the sorted array . then u use binary search to create balanced tree
public:
    void inorder_traversal(TreeNode* root,vector<TreeNode*> &array)
    {
        if(!root)
            return;
        inorder_traversal(root->left,array);
        array.push_back(root);
        inorder_traversal(root->right,array);

    }

    TreeNode* construct_balanceBST(int left,int right, vector<TreeNode*> &array)
    {
        if(left>right) 
            return NULL;
        int mid = (left+right)/2;
        TreeNode* root = array[mid];

        root->left = construct_balanceBST(left,mid-1,array);
        root->right = construct_balanceBST(mid+1,right,array);
        return root;
    }


    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> array;
        inorder_traversal(root,array);
        return construct_balanceBST(0,array.size()-1,array);
    }
};