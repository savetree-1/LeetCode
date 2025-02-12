/*
By   :: savetrees
Used :: Iterative In-Order Traversal
*/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* temp=root;
        vector<int>in_order;
        while(temp!=NULL | !st.empty())
        {
            if(temp!=NULL)
            {
                st.push(temp);
                temp=temp->left;
            }
            else
            {
                if(st.empty())break;
                temp=st.top();
                st.pop();
                in_order.push_back(temp->val);
                temp=temp->right;
            }
        }
        return in_order;
    }
};