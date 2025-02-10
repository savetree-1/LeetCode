/*
By   :: savetrees
Used :: Recursive Method
*/
class Solution {
public:
    void auxi(TreeNode* root, vector<int>&dummy)
    {
        if(!root)return ;
        dummy.push_back(root->val);
        auxi(root->left,dummy);
        auxi(root->right,dummy);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>dummy;
        auxi(root,dummy);
        return dummy;
    }
};