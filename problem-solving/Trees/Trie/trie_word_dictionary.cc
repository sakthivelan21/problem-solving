
class Node {
public:
    unordered_map<char,Node*> map;
    bool end_of_word ;
    Node() {
        end_of_word = false;
    }
};

class WordDictionary {
public:
    Node* root;
    WordDictionary() {
        root = new Node();
    }
    
    void addWord(string word) {
        
        Node* ptr = root;
        //printf("addWord : %s \n",word.c_str());
        for(int i=0;i<word.size();i++) {
            if(ptr->map.find(word[i])==ptr->map.end()) {
                ptr->map[word[i]] = new Node();
            }
            ptr = ptr->map[word[i]];
        }
        ptr->end_of_word=true;
        //printf("addWord : %c %d\n",word[word.size()-1],ptr->end_of_word);
    }

    bool search_nodes(Node* ptr, string &word, int index,int length) {
        
        for(int i=index;i<length;i++){

            if(word[i]=='.') {

                for(auto it = ptr->map.begin();it!=ptr->map.end();it++) {

                    if(search_nodes(it->second,word,i+1,length))
                        return true;
                }
                return false;
            } else {
                if(ptr->map.find(word[i])==ptr->map.end()) {
                    return false;
                }
                ptr = ptr->map[word[i]];
            }
        }

        return ptr->end_of_word;
    }
    
    bool search(string word) {
        //printf("search: %s \n ",word.c_str());
        return search_nodes(root,word,0,word.size());
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */