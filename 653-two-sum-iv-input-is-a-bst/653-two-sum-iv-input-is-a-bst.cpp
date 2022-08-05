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
    unordered_map<int,int> map;
    bool inorder(TreeNode* root, int k){
        if(root==NULL)
            return false;
        if(inorder(root->left,k))
            return true;
        if(map.find(k-root->val)!=map.end())
            return true;
        map[root->val]++;
        if(inorder(root->right,k))
            return true;
        return false;
    }
    
    bool findTarget(TreeNode* root, int k) {
        return inorder(root,k);
    }
};