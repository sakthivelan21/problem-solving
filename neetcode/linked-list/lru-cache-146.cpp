/*
Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

Implement the LRUCache class:

LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
int get(int key) Return the value of the key if the key exists, otherwise return -1.
void put(int key, int value) Update the value of the key if the key exists. 
Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, 
evict the least recently used key.
The functions get and put must each run in O(1) average time complexity.

 

Example 1:

Input
["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
Output
[null, null, null, 1, null, -1, null, -1, 3, 4]

Explanation
LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1); // cache is {1=1}
lRUCache.put(2, 2); // cache is {1=1, 2=2}
lRUCache.get(1);    // return 1
lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
lRUCache.get(2);    // returns -1 (not found)
lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
lRUCache.get(1);    // return -1 (not found)
lRUCache.get(3);    // return 3
lRUCache.get(4);    // return 4
 

Constraints:

1 <= capacity <= 3000
0 <= key <= 104
0 <= value <= 105
At most 2 * 105 calls will be made to get and put.
*/


class Node {
public:
    Node* prev ;
    Node* next;
    int key;
    int value;
    Node(int k,int v) {
        this->key = k;
        this->value = v;
        this->prev = nullptr;
        this->next = nullptr;
    }

    void reset(int k,int v) {
        this->key = k;
        this->value = v;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class LRUCache {
public:

    Node* head = nullptr;
    Node* tail = nullptr;
    int capacity;

    unordered_map<int,Node*> map;

    void node_push_front(Node* node)
    {

        if(!node)
        {
            // printf("push node: is null \n");
            return;
        }


        if(!head)
        {
            head = node;
            tail = node;
            return ;
        }

        node->next = head;
        node->prev = nullptr;
        head->prev = node;
        head = node;
    }

    Node* node_pop_from_position(Node* node) {

        if(!node)
        {
            // printf("warn : node is inserted null \n");
            return node;
        }
        
        if(!head || !tail)
            return nullptr;
        
        // 1. starting postition ? 
        if(head==node)
        {
            head = head->next;
            if(!head)
                tail = nullptr;
            else {
                head->prev = nullptr;
            }
        }
        // 2. ending node
        else if(node==tail)
        {
            tail = tail->prev;
            if(!tail)
                head = nullptr;
            else 
                tail->next = nullptr;
        }
        // 3. mid node do normal swapping
        else {
            Node* prev = node->prev;
            Node* next = node->next;
            prev->next = next;
            next->prev = prev;
        }
        //reset node;
        node->next = nullptr;
        node->prev = nullptr;
        return node;
    }

    Node* node_pop_back() {

        Node* node = nullptr;

        if(!tail)
            return node;
        
        node = tail;

        if(tail==head)
        {
            tail = nullptr;
            head = nullptr;
        }
        else {
            Node* prev = tail->prev;
            prev->next = nullptr;
            tail = prev;
        }


        return node;

    }

    int get_top_node() {
        if(!head)
            return -1;
        return head->value;
    }

    void display(){

        Node* ptr = head;

        printf("display linked list : ");

        while(ptr)
        {
            printf("(%d,%d)->",ptr->key,ptr->value);
            ptr = ptr->next;
        }
        printf("\n");
    }


    LRUCache(int capacity) {
        this->capacity = capacity;
        this->head = nullptr;
        this->tail = nullptr;
    }
    
    int get(int key) {
        // printf("get : key %d \n",key);
        if(map.find(key)==map.end())
        {
            // printf("get : key %d not found \n",key);
            return -1;
        }
        
        Node* node = node_pop_from_position(map[key]);

        if(!node)
        {
            // printf("get: node not found for key %d\n",key);
            return -1;
        }

        // printf("get : before display \n");
        // display();

        node_push_front(node);
        
        // printf("get : after display \n");
        // display();
       

        map[key] = head;
        // printf("get %d \n", head ? head->value : 0);
        return map[key]->value;
        
    }
    
    void put(int key, int value) {

        // printf("put called : key %d , value %d\n",key,value);

        Node* node = nullptr;

        if(map.find(key)==map.end())
        {
            if(map.size()>=this->capacity)
            {
                node = node_pop_back();
                if(node) 
                    map.erase(node->key);
            }
        }
        else {
            node = node_pop_from_position(map[key]);
            map.erase(node->key);
        }

        if(!node)
            node = new Node(key,value);
        else 
            node->reset(key,value);
        
        // printf("put : before display \n");
        // display();
        
        node_push_front(node);

        // printf("put : after display \n");
        // display();

        map[key] = head;

        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
