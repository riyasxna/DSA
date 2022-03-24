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
    long pre;
    bool result(TreeNode* root){
        if(root==NULL)
            return true;
        bool ans=result(root->left);
        if(ans==0)
            return false;
        if(root->val<=pre)
            return false;
        if(root->val>pre)
            pre=root->val;
        return result(root->right);
    }
    
    bool isValidBST(TreeNode* root) {
        pre=LONG_MIN;
        return result(root);
    }
};