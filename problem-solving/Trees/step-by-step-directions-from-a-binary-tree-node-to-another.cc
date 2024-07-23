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
 * 
 * 2096. Step-By-Step Directions From a Binary Tree Node to Another
 */
class Solution {
public:
    bool generate_directions(TreeNode* root,int value , string &result)
    {
        if(root->val == value)
        {
            return true;
        }
        if(root->left && generate_directions(root->left,value,result) )
        {
            
            result+="L";
        }
        else if(root->right && generate_directions(root->right,value,result))
        {
            
            result+="R";
        }

        return result.size()>0;

    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string start_directions = "" , end_directions = "";

        if(!root)
            return "";
        
        generate_directions(root,startValue,start_directions);
        generate_directions(root,destValue,end_directions);
        printf("%s %s",start_directions.c_str(),end_directions.c_str());
    

        while (!start_directions.empty() && !end_directions.empty() && start_directions.back() == end_directions.back()) {
            start_directions.pop_back();
            end_directions.pop_back();
        }
        return string(start_directions.size(), 'U') + string(rbegin(end_directions), rend(end_directions));
    }
};