/*
By   :: savetrees
Used :: Recursive In-Order Traversal
*/
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&dummy)
    {
        if(root==NULL)return ;
        inorder(root->left,dummy);
        dummy.push_back(root->val);
        inorder(root->right,dummy);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>dummy;
        inorder(root,dummy);
        return dummy;
    }
};