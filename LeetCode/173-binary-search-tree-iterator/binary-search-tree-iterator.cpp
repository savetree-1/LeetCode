class BSTIterator {
public:
    vector<int> values;
    int pointer;

    void inorder(TreeNode* root) {
        if(root == NULL) {
            return;
        }

        inorder(root->left);
        values.push_back(root->val);
        inorder(root->right);
    }

    BSTIterator(TreeNode* root) {
        pointer = -1;
        inorder(root);
    }

    int next() {
        pointer++;
        return values[pointer];
    }

    bool hasNext() {
        return pointer + 1 < values.size();
    }
};