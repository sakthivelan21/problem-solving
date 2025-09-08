/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void dfs_encode(TreeNode* root,string &result) {
        if(!root){
            result += "N,";
            return;
        }

        result+= to_string(root->val)+",";

        dfs_encode(root->left,result);
        dfs_encode(root->right,result);
        
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string result="";

        dfs_encode(root,result);
        return result;
    }

    vector<string> split_strings(string data,char delimiter) {
        vector<string> result;
        string res ="";
        for(char c : data) {
            if(c==delimiter) {
                if(!res.empty())
                    result.push_back(res);
                res="";
            }
            else {
                res+=c;
            }
        }
        if(!res.empty())
            result.push_back(res);
        return result;
    }

    void display_str(vector<string> &data) {
        printf("array is \n");

        for(int i=0;i<data.size();i++){
            printf("%s ",data[i].c_str());
        }
        printf("\n");
    } 

    TreeNode* dfs_deserialize(vector<string> &res,int &ptr) {
        if(ptr>=res.size() || res[ptr]=="N") {
            ptr++;
            return nullptr;
        }

        TreeNode* node = new TreeNode(stoi(res[ptr]));
        ptr++;
        node->left = dfs_deserialize(res,ptr);
        node->right = dfs_deserialize(res,ptr);
        return node;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        // printf("%s \n",data.c_str());
        vector<string> res = split_strings(data,',');
        int ptr=0;
        // display_str(res);
        return dfs_deserialize(res,ptr);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));