/*By   :: savetrees
Used :: Stack Based Approach */
class Solution {
public:
    TreeNode* recoverFromPreorder(string traversal) {
        stack<pair<TreeNode*,int>>st;
        int size=traversal.size();
        int i=0;
        while(i<size)
        {
            int depth=0;
            while(i<size && traversal[i]=='-')depth++,i++;
            int val=0;
            while(i<size && isdigit(traversal[i]))val=val*10+(traversal[i++]-'0');
            TreeNode* node=new TreeNode(val);
            while(!st.empty() && st.top().second>=depth)st.pop();
            if(!st.empty())
            {
                if(st.top().first->left==NULL)st.top().first->left=node;
                else st.top().first->right=node;
            }
            st.push({node,depth});
        }
        while(st.size()>1)st.pop();
        return st.top().first;
    }
};