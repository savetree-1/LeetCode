int bfs(TreeNode * root)
{
    queue<TreeNode*> q;
    q.push(root);
    int lvl = 1;
    int ans = 1;
    int maxi=INT_MIN;
    if(root->left==NULL && root->right==NULL)return root->val;
    while(!q.empty())
    {
        int size=q.size();
        int sum = 0;
        while(size--)
        {
            TreeNode* nod=q.front();
            q.pop();
            sum+=nod->val;
            //maxi=max(maxi,nod->val);
            if(nod->left)q.push(nod->left);
            if(nod->right)q.push(nod->right);
        }
        if (sum > maxi) {
            maxi = sum;
            ans = lvl;
        }
        lvl++;
    }
    return ans;
}


class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        return bfs(root);
    }
};