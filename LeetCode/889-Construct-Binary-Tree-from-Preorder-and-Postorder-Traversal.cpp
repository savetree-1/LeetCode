/*
By   :: savetrees
Used :: Recursive Approach
*/
class Solution {
public:
    TreeNode* construct_tree(vector<int>&prefix, vector<int>&postfix, int &pre, int l, int h, int size) {
        if(pre>=size||l>h) return NULL;
        TreeNode*root=new TreeNode(prefix[pre++]);
        if(l==h)return root;
        int i;
        for(i=l;i<=h;i++) {
            if(prefix[pre]==postfix[i]) break;
        }
        if(i<=h) {
            root->left=construct_tree(prefix,postfix,pre,l,i,size);
            root->right=construct_tree(prefix,postfix,pre,i+1,h-1,size);
        }
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder,vector<int>& postorder) {
        int pre=0;
        return construct_tree(preorder,postorder,pre,0,preorder.size()-1,preorder.size());
    }
};
