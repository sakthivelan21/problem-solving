class Node {
public:
    Node* prev;
    Node* next;
    int val;
    int key;

    Node(int key, int value) {
        this->val = value;
        this->key = key;
        prev = nullptr;
        next = nullptr;
    }
};

class LRUCache {
public:

    unordered_map<int,Node*> map;
    Node* head = nullptr;
    Node* tail =  nullptr;
    int max_length;


    LRUCache(int capacity) {
        this->max_length = capacity;
        head = nullptr;
        tail = nullptr;
    }

    
    
    int get(int key) {
        if(map.find(key)==map.end())
            return -1;
        
        map[key] = node_push_front(map[key]);
        return map[key]->val;
    }
    
    void put(int key, int value) {
        if(map.find(key)==map.end()) {
            if(map.size()>=max_length) {
                pop_back_last_node();
            }
            map[key] = new Node(key,value);
        } else {
            map[key]->val = value;
        }
        map[key] = node_push_front(map[key]);
    }

    void pop_back_last_node() {
        Node* ptr = tail;
        if(!head || !tail)
            return;
        if(tail==head) {
            head = nullptr;
            tail = nullptr;
        } else {
            tail = tail->prev;
            (tail)->next = nullptr;
        }

        map.erase(ptr->key);
        delete ptr;
        ptr=nullptr;
    }
    

    Node* node_push_front(Node* node) {
        if(!head ) 
        {
            head = node;
            tail = node;
            return head;
        }
        else if(head==node) 
            return head;
        
        // if cur node is tail node
        if(tail==node) {
            Node* prev_ptr = node->prev;

            if(prev_ptr)
            {
                tail = prev_ptr;
                prev_ptr->next = nullptr;
            } else {
                tail = nullptr;
            }
        } else {
            Node* prev_ptr = node->prev;

            if(prev_ptr)
            {
                prev_ptr->next = node->next;
            }
            Node* next_ptr= node->next;
            if(next_ptr)
                next_ptr->prev = prev_ptr;
        }


        node->next = nullptr;
        node->prev = nullptr;

        head->prev = node;
        node->next = head;
        head = node;
        if(!tail) {
            tail = head;
        }
        return head;
    }

    
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */