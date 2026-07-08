
class Solution {
public:
    int countPaths(TreeNode* root, long long targetSum)
    {
        if(root==NULL)
        {
            return 0;
        }
        int count=0;
        if(root->val==targetSum)
        {
            count++;
        }
        count+=countPaths(root->left,targetSum-root->val);
        count+=countPaths(root->right,targetSum-root->val);
        return count;
    }
    int pathSum(TreeNode* root, long long targetSum) {
        if(root==NULL)
        {
            return 0;
        }
        int count=countPaths(root,targetSum);
        count+=pathSum(root->left,targetSum);
        count+=pathSum(root->right,targetSum);
        return count;

    }
};