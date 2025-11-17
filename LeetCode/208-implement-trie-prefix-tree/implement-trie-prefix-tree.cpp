class Trie {
private:
    struct Node{
        Node* next[26];
        bool end;
        Node()
        {
            end=false;
            for(int i=0;i<26;i++)next[i]=nullptr;
        }};
        Node* root;
public:
    Trie() {
        root= new Node();}
    void insert(string word) {
        Node* curr=root;
        for(char c:word)
        {
            int idx=c-'a';
            if(!curr->next[idx])curr->next[idx]=new Node();
            curr=curr->next[idx];
        }
        curr->end=true;
    }
    bool search(string word) {   
        Node *curr=root;
        for(char c:word)
        {
            int idx=c-'a';
            if(!curr->next[idx])return false;
            curr=curr->next[idx];
        }
        return curr->end;
    }
    bool startsWith(string prefix) {
        Node* curr= root;
        for(char c: prefix)
        {
            int idx=c-'a';
            if(!curr->next[idx])return false;
            curr=curr->next[idx];
        }
        return true;
    }
};
