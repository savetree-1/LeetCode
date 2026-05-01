class Node {
    public:
    int key;
    int value;
    Node *next;
    Node *prev;

    Node(int k,int v)
    {
        key=k;
        value=v;
    }
};
class LRUCache {
private:
    int cap;
    unordered_map<int,Node* >mpp;
    Node* head;
    Node* tail;

    void remove(Node* node)
    {
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }

    void insert(Node* node)
    {
        node->next=head->next;
        head->next->prev=node;
        node->prev=head;
        head->next=node;
    }
public:
    LRUCache(int capacity) {
        cap=capacity;
        head= new Node(-1,-1);
        tail= new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
    }
    int get(int key) {
        if(mpp.find(key)==mpp.end())
        {
            return -1;
        }
        Node* node= mpp[key];
        remove(node);
        insert(node);
        return node->value;
    }

    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end())
        {
            Node* node=mpp[key];
            remove(node);
            mpp.erase(key);
        }
        if(mpp.size()==cap)
        {
            Node* lru=tail->prev;
            remove(lru);
            mpp.erase(lru->key);
        }
        Node* node = new Node(key,value);
        insert(node);
        mpp[key]=node;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */