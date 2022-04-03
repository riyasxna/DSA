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
    void rsv(TreeNode* node, int level, vector<int>& ans){
        if(node==NULL)
            return;
        int n=ans.size();
        if(n==level)
            ans.push_back(node->val);
        rsv(node->right,level+1,ans);
        rsv(node->left,level+1,ans);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int level=0;
        rsv(root, level, ans);
        return ans;
    }
};