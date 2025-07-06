class Node {
public:
    Node* prev;
    Node* next;
    int val;

    Node(int v) {
        this->val = v;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class MyLinkedList {
public:

    Node* head = nullptr;
    Node* tail = nullptr;
    int length;

    MyLinkedList() {
        this->length = 0;
        this->head = nullptr;
        this->tail = nullptr;
    }

    Node* getNodeAtIndex(int index){
        if(index<0 || index>=length)
        {
            return nullptr;
        }

        Node* ptr = head;

        int count = 0;
        while(ptr!=nullptr && count<index) {
            ptr = ptr->next;
            count++;
        }

        if(count!=index)
            return nullptr;
        return ptr;
    }
    
    int get(int index) {
        Node* ptr = getNodeAtIndex(index);

        if(!ptr)
            return -1;
        // printf("Get Called At Index %d val %d\n",index,ptr->val);
        // display();
        return ptr->val;
    }

    void display() {
        Node* ptr = head;
        printf("display array ");
        while(ptr) {
            printf("%d->",ptr->val);
            ptr = ptr->next;
        }

        printf("\n");
    }
    
    void addAtHead(int val) {

        Node* node = new Node(val);

        if(!head) {
            head = node;
            tail = node;
        } 
        else {
            head->prev = node;
            node->next = head;
            head = node;
        }
        // printf("addAtHead %d\n",val);
        // display();
        length++;
    }
    
    void addAtTail(int val) {
        Node* node = new Node(val);
        if(!tail) {
            tail = node;
            head = node;
        } else {
            tail->next = node;
            node->prev = tail;
            tail  = node;
        }
        // printf("addAtTail %d\n",val);
        // display();
        length++;
    }
    
    void addAtIndex(int index, int val) {

        if(index<0 || index>length) 
            return;

        if(index==0) {
            addAtHead(val);
        } else if(index==length) {
            addAtTail(val);
        }
        else {
            Node* ptr  = getNodeAtIndex(index);

            Node* node = new Node(val);

            Node* prev = ptr->prev;

            if(prev) {
                prev->next = node;
                node->prev = prev;
            }

            node->next = ptr;
            ptr->prev = node;
            length++;
        }
        
        // printf("Add At Index %d %d\n",index,val);
        // display();

    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=length) 
            return;
        if(index==0) {
            removeAtHead();
        } else if(index==length-1) {
            removeAtTail();
        } 
        else {
            Node* ptr = getNodeAtIndex(index);

            Node* prev = ptr->prev;
            Node* next = ptr->next;

            if(prev) {
                prev->next = next;
            }

            if(next) {
                next->prev = prev;
            }

            delete ptr;
        }

        // printf("Delete At Index %d \n",index);
        // display();
        length--;
    }

    void removeAtHead() {
        if(!head) 
            return;

        Node* ptr = head; 

        if(ptr==tail){
            tail = nullptr;
        }

        head = head->next;
        if(head) {
            head->prev = nullptr;
        }

        delete ptr;
    }

    void removeAtTail() {
        if(!tail)
            return;
        Node* ptr = tail;
        tail = tail->prev;

        if(ptr==head){
            head = nullptr;
        }

        if(tail){
            tail->next = nullptr;
        }

        delete ptr;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */