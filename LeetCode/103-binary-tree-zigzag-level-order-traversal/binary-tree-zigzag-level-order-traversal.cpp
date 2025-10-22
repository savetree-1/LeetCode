
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL)
        {
            return result;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool flag=1;
        while(!q.empty())
        {
            int size=q.size();
            vector<int>ans(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                int index;
                if(flag)
                {
                    index=i;
                }
                else
                {
                    index=size-i-1;
                }
                ans[index]=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            flag=!flag;
            result.push_back(ans);
        }
        return result;
    }
};