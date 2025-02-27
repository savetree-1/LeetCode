/*
By   :: savetrees
Used :: BFS + TreeMap + Multiset
*/
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>mpp;
        queue<pair<TreeNode*, pair<int,int>>>level;
        level.push({root,{0,0}});
        while(!level.empty())
        {
            auto p=level.front();
            level.pop();
            TreeNode* node=p.first;
            int x=p.second.first;
            int y=p.second.second;
            mpp[x][y].insert(node->val);
            if(node->left)level.push({node->left,{x-1,y+1}});
            if(node->right)level.push({node->right,{x+1,y+1}});
        }
        vector<vector<int>>ans;
        for(auto p:mpp)
        {
            vector<int>col;
            for(auto q:p.second)
            {
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};