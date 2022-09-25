class MyCircularQueue {
public:
    int f,r,n;
    vector<int> q;
    MyCircularQueue(int k) {
        q = vector<int> (k, -1);
        f = 0, r = 0, n = k;
    }
    
    bool enQueue(int value) {
        if(q[r] == -1) {
            q[r] = value;
            r = (r+1)%n;
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(q[f] != -1) {
            q[f] = -1;
            f = (f+1)%n;
            return true;
        }
        return false;
    }
    
    int Front() {
        return q[f]==-1 ? -1 : q[f];
    }
    
    int Rear() {
        int idx = (r-1+n)%n;
        return q[idx]==-1 ? -1 : q[idx];
    }
    
    bool isEmpty() {
        return q[f]==-1;
    }
    
    bool isFull() {
        return (f==r && q[r]!=-1);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */