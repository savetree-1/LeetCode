
class Solution {
public:
    int minCameraCover(TreeNode* root) {
        int sum=0;
        int check=dfs(root,sum);
        if(check==0)sum++;
        return sum;
    }
    int dfs(TreeNode* root, int &sum)
    {
        if(!root)
        {
            return 1;
        }
        int l=dfs(root->left,sum);
        int r=dfs(root->right,sum);
        if(l==0 || r==0)
        {
            sum++;
            return 2;
        }
        else if(l==2 || r==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        return -1;

    }
};