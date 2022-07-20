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
    int height(TreeNode* root){
        if(root == NULL) return 0;
        return max(height(root->left),height(root->right)) + 1;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int n = height(root);
        vector<vector<int>> ans(n);
        if(root == NULL) return ans;
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()){
            int sz = qu.size();
            vector<int>level;
            for(int i=0;i<sz;i++){
                TreeNode* front = qu.front();
                qu.pop();
                level.push_back(front->val);
                if(front->left) qu.push(front->left);
                if(front->right) qu.push(front->right);
            }
            ans[n-1] = level;
            n--;
        }
        return ans;
    }
};