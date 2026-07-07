
class Solution {
public:
    int getGoodNodes(TreeNode* node, int maxi)
    {
        if(node==NULL)
        {
            return 0;
        }
        int count=0;
        if(node->val>=maxi)
        {
            maxi=max(maxi,node->val);
            count++;
        } 
        return count+ getGoodNodes(node->left,maxi) + getGoodNodes(node->right,maxi);  
    }
    int goodNodes(TreeNode* root) {
        return getGoodNodes(root,root->val);
    }
};