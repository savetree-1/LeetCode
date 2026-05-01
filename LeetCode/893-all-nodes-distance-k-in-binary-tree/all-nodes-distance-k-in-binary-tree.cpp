
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>mpp;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(node->left!=NULL)
            {   mpp[node->left]=node;
                q.push(node->left);
            }
            if(node->right!=NULL)
            {
                mpp[node->right]=node;
                q.push(node->right);
            }
        }
        int count=0;
        unordered_set<TreeNode*>visited;
        queue<TreeNode*>bfs;
        bfs.push(target);
        visited.insert(target);
        while(!bfs.empty())
        {
            int size=bfs.size();
            if(k==count)break;
            count++;
            for(int i=0;i<size;i++)
            {
                TreeNode* node=bfs.front();
                bfs.pop();
                if(node->left && !visited.count(node->left))
                {
                    bfs.push(node->left);
                    visited.insert(node->left);
                }
                if(node->right && !visited.count(node->right))
                {
                    bfs.push(node->right);
                    visited.insert(node->right);
                }
                if(mpp[node] && !visited.count(mpp[node]))
                {
                    bfs.push(mpp[node]);
                    visited.insert(mpp[node]);
                }
            } 
        }
        vector<int>ans;
        while(!bfs.empty())
        {

            ans.push_back(bfs.front()->val);
            bfs.pop();
        }
        return ans;
    }
};