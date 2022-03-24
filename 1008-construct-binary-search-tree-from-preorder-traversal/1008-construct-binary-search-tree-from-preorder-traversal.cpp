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
    TreeNode* cons(vector<int>& preorder, int &i, int max){
        if(i==preorder.size() || preorder[i]>max)
            return NULL;
        TreeNode* root=new TreeNode(preorder[i++]);
        root->left=cons(preorder, i, root->val);
        root->right=cons(preorder, i, max);
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return cons(preorder, i, INT_MAX);
    }
};