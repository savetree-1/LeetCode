class Trie {
    struct Node {
        Node* links[26] = {};
        bool isEnd = false;
    };
    
    Node* root;

public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for(char ch : word) {
            int idx = ch - 'a';
            if(!node->links[idx])
                node->links[idx] = new Node();
            node = node->links[idx];
        }
        node->isEnd = true;
    }
    
    bool search(string word) {
        Node* node = root;
        for(char ch : word) {
            int idx = ch - 'a';
            if(!node->links[idx])
                return false;
            node = node->links[idx];
        }
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
        for(char ch : prefix) {
            int idx = ch - 'a';
            if(!node->links[idx])
                return false;
            node = node->links[idx];
        }
        return true;
    }
};
