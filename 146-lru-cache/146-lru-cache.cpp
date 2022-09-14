
   struct Node {
    int key;
    int val;
    Node *prev;
    Node *next;
    
    Node() {
        key = -1;
        val = -1;
        prev = NULL;
        next = NULL;
    }
    Node(int k, int v) {
        key = k;
        val = v;
        prev = NULL;
        next = NULL;
    }
    
};
struct LinkList {
    int size;
    int cap;
    Node *head;
    Node *tail;
    LinkList(int c) : size(0), cap(c) {
        head = new Node();
        tail = new Node();
        head->next = tail;
        tail->prev = head;
    }
};

class LRUCache {
private:
    LinkList list;
    unordered_map<int, Node*> m;
public:
    LRUCache(int capacity) : list(LinkList(capacity)) {
    }
    
    void add(Node *n) {
        n->next = list.head->next;
        n->prev = list.head;
        list.head->next->prev = n;
        list.head->next = n;
    }
    
    int get(int key) {
        Node *n = getNode(key);
        if (!n) {
            return -1;
        }

        n->prev->next = n->next;
        n->next->prev = n->prev;
        add(n);
        return n->val;
    }
    
    Node *getNode(int key) {
        Node *n =  m[key];
        if (!n) return NULL;
        if (!n->next) return NULL;
        return n;
    }
    
    void put(int key, int value) {
        Node *n = getNode(key);
        if (n) {
            n->val = value;
            n->prev->next = n->next;
            n->next->prev = n->prev;
            
            add(n);
            return;
        }
        n = new Node(key, value);
        m[key] = n;
        add(n);
        list.size++;
        if (list.size>list.cap) {
            Node *last = list.tail->prev;
            last->prev->next = list.tail;
            list.tail->prev = last->prev;
            // m.erase(last->key);
            // delete last;
            last->next = NULL;
            last->prev = NULL;
            list.size--;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */