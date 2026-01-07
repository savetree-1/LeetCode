class Solution {
public:
    long long mod = 1e9 + 7;
    long long totalSum = 0;
    long long maxProduc = 0;
    long long dfsSum(TreeNode* root) {
        if (!root) return 0;
        return  dfsSum(root->left) +root->val + dfsSum(root->right);
    }

    long long dfsProduct(TreeNode* root) {
        if (!root) return 0;
        long long left = dfsProduct(root->left);
        long long right = dfsProduct(root->right);
        long long subSum = root->val + left + right;
        maxProduc = max(maxProduc, subSum * (totalSum - subSum));
        return subSum;
    }
    int maxProduct(TreeNode* root) {
        totalSum = dfsSum(root);     
        dfsProduct(root);            
        return maxProduc % mod;
    }
};