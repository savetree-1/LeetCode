/*
By   :: savetrees
Used :: DFS
*/
class Solution {
public:
int res=0;
int level=0;
void dfs(TreeNode*root,int depth){
    if(root==NULL){
        return;
    }
    depth++;
    if(root->left==NULL&&root->right==NULL){
        if(depth>level){
            level=depth;
            res=root->val;
        }
    }
        dfs(root->left, depth);
        dfs(root->right, depth);
}
    int findBottomLeftValue(TreeNode* root) {
        dfs(root,1);
        return res;
    }
};