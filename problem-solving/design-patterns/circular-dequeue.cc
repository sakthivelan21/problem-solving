class MyCircularDeque {
public:
    vector<int> queue;
    int front , back,size,max_size;
    MyCircularDeque(int k): queue(k,0) {
        
        front = k-1;
        back = 0;
        size = 0;
        max_size = k;
    }
    
    bool insertFront(int value) {
        if(isFull())
            return false;
        queue[front] = value;
        size++;
        front = (front-1+max_size)%max_size;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull())
            return false;
        queue[back]=value;
        size++;
        back = (back+1+max_size)%max_size;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty())
            return false;
        front = (front+1)%max_size;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty())
            return false;
        back = (back-1 + max_size)%max_size;
        size--;
        return true;
    }
    
    int getFront() {
        if(isEmpty())
            return -1;
        return queue[(front+1)%max_size];
    }
    
    int getRear() {
        if(isEmpty())
            return -1;
        return queue[(back-1+max_size)%max_size];
    }
    
    bool isEmpty() {
        return size<=0;
    }
    
    bool isFull() {
        return size>=max_size;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */