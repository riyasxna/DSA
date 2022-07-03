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
    int sum=0;
    void traverse(TreeNode* root,bool flag){
        if(!root)
            return;
        if(!root->left && !root->right && flag==true){
            sum+=root->val;
        }
        else{
            traverse(root->left,true);
            traverse(root->right,false);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        traverse(root->left,true);
        traverse(root->right,false);
        return sum;
    }
};