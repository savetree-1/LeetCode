/*
By   :: savetrees
Used :: Iterative Method
*/
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>pre_order;
        if(!root)return pre_order;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            root=st.top();
            st.pop();
            pre_order.push_back(root->val);
            if(root->right!=NULL)st.push(root->right);
            if(root->left!=NULL)st.push(root->left); 
        }
        return pre_order;
    }
};