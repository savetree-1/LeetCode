class Solution {
public:
    int ans = -1;
    void dfs(TreeNode* node, int mini) {
        if(!node) return;
        if(node->val > mini) {
            if(ans == -1 || node->val < ans)
                ans = node->val;
            return;
        }
        dfs(node->left, mini);
        dfs(node->right, mini);
    }
    int findSecondMinimumValue(TreeNode* root) {
        dfs(root, root->val);
        return ans;
    }
};
