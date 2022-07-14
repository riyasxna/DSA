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
    int diameter=0;
    int recurse(TreeNode* root){
        if(!root)
            return 0;
        int left=recurse(root->left),right=recurse(root->right);
        diameter=max(diameter,left+right);
        return max(left,right)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        recurse(root);
        return diameter;
    }
};