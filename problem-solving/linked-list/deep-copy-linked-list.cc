/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>  ptr_map;

        Node* new_head = nullptr, *new_ptr = nullptr;

        Node* ptr = head;

        while(ptr) {
            Node* node = new Node(ptr->val) ;

            if(!new_head) {
                new_head = node;
                new_ptr = new_head;
            } else {
                new_ptr->next = node;
                new_ptr = node;
            }

            ptr_map[ptr] = node;

            ptr = ptr->next; 
        }

        ptr = head;

        while(ptr) {
            new_ptr = ptr_map[ptr];

            new_ptr->random = ptr_map[ptr->random];
            ptr = ptr->next;
        }

        return new_head;

    }
};