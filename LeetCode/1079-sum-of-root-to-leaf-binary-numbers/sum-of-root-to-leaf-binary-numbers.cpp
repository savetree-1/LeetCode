/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        function<void(TreeNode*, int)> rec = [&](TreeNode* node, int num) ->void {
            if(!node) return;
            if(!node->left && !node->right) {
                ans += 2*num + node->val; return;
            }
            int res = 2*num + node->val;
            rec(node->left, res);
            rec(node->right, res);
        };
        rec(root, 0);
        return ans;
    }
};