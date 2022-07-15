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
    bool check(TreeNode* root, int target, int sum){
        sum+=root->val;
        if(root->left==NULL && root->right==NULL){
            if(sum==target)
                return true;
            return false;
        }
        if((root->left && check(root->left,target,sum)) || (root->right && check(root->right,target,sum)))
            return true;
        return false;
    }
    
    bool hasPathSum(TreeNode* root, int target) {
        if(!root)
            return false;
        return check(root,target,0);
    }
};