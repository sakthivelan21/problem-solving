class TrieNode{

public:
    unordered_map<char,TrieNode*> map;
    bool is_end=false;
    TrieNode() {
        is_end = false;
    }

    void insert(TrieNode* root,string &word) {
        TrieNode* ptr = root;

        for(char c : word) {
            if(ptr->map.find(c)==ptr->map.end()) {
                ptr->map[c] = new TrieNode();
            }

            ptr = ptr->map[c];
        }

        ptr->is_end = true;
    }

    bool isWordPresent(TrieNode* root,string & word) {
        TrieNode* ptr = root;

        for(char c : word) {
            if(ptr->map.find(c)==ptr->map.end()) {
                return false;
            }
            ptr = ptr->map[c];
        }

        return ptr->is_end;
    }
};


class Solution {
public:
    unordered_set<string> result;

    TrieNode *root = nullptr;

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words)   
    {
        root = new TrieNode();
        // populate trienode lookup;
        for(string &s : words) {
            root->insert(root,s);
        }

        // for(string &s : words) {
        //     printf("word is %s , trie status %d\n",s.c_str(),root->isWordPresent(root,s));
        // }

        int row = board.size();
        int col = board[0].size();


        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                dfs(i,j,row,col,board,"",root);
            }
        }

        vector<string> res;

        for(auto it=result.begin();it!=result.end();it++) {
            res.push_back(*it);
        }

        return res;

    }

    void dfs(int i,int j,int row,int col, vector<vector<char>> &board,string word, TrieNode* node) {

        if(i<0 || i>=row || j<0 || j>=col || board[i][j]=='*' || !node || node->map.find(board[i][j]) == node->map.end() ) {
            return;
        }

        char t = board[i][j];

        board[i][j]='*';


        node = node->map[t];
        word+=t;

        if(node->is_end) {
            result.insert(word);
        }
        dfs(i,j+1,row,col,board,word,node);
        dfs(i+1,j,row,col,board,word,node);
        dfs(i-1,j,row,col,board,word,node);
        dfs(i,j-1,row,col,board,word,node);

        board[i][j] =t;
    }
};