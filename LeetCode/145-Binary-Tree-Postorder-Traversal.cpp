/*
By   :: savetrees
Used :: Iterative Approach
*/
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)return {};
        TreeNode* node=root;
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        vector<int>post_order;
        st1.push(node);
        while(!st1.empty())
        {
            root=st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!=NULL)st1.push(root->left);
            if(root->right!=NULL)st1.push(root->right);
        }
        while(!st2.empty())
        {
            post_order.push_back(st2.top()->val);
            st2.pop();
        }
        return post_order;
    }
};