class Node {
public:
    Node* prev;
    Node* next;
    string val;

    Node(string v){
        this->val  = v;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class BrowserHistory {
public:

    Node* head;
    Node *iter;

    BrowserHistory(string homepage) {
        this->head = nullptr;
        this->iter = nullptr;

        Node* node = new Node(homepage);
        this->head = this->iter = node;
    }
    
    void visit(string url) {
        Node* ptr = iter->next;
        iter->next = nullptr;
        while(ptr) {
            Node* temp = ptr;
            ptr = ptr->next;
            delete temp;
        }
        Node* node = new Node(url);
        iter->next = node;
        node->prev = iter;
        iter = node;
    }
    
    string back(int steps) {
        int count = 0;
        Node* ptr = iter;

        while(ptr && count<steps) {
            count++;
            ptr = ptr->prev;
        }
        if(!ptr) {
            iter = head;
        } else {
            iter = ptr;
        }
        return iter->val;
    }
    
    string forward(int steps) {
        int count = 0;
        Node* ptr = iter;

        while(ptr->next && count<steps) {
            count++;
            ptr = ptr->next;
        }
        iter= ptr;
        return iter->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */