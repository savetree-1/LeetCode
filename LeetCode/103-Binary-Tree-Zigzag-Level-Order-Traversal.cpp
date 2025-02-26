/*
By   :: savetrees
Used :: Queue [BFS]
*/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        vector<vector<int>>res;
        if(root==NULL)return res;
        queue<TreeNode*>q;
        q.push(root);
        bool order=true;
        while(!q.empty())
        {
            int size=q.size();
            vector<int>row(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                int index;
                if(order)index=i;
                else index=size-i-1;
                row[index]=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            order=!order;
            res.push_back(row);
        }
        return res;
    }
};