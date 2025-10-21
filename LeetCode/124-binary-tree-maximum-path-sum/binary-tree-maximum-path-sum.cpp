
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxiPath(root,maxi);
        return maxi;
    }
    int maxiPath(TreeNode* root,int &maxi)
    {
        if(!root)return NULL;
        int leftSum=max(0,maxiPath(root->left,maxi));
        int rightSum=max(0,maxiPath(root->right,maxi));
        maxi=max(maxi,leftSum+rightSum+root->val);
        return max(leftSum,rightSum)+root->val;
    }
};