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
    void inorder(TreeNode* root, vector<int>& v){
        if(root==NULL){
            return;
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root,v);
        int n=v[k-1];
        return n;
    }
};


/**int cnt = 0, ans;
void findInorder(TreeNode *root, int &k)
{
    if (root == NULL)
        return;
    findInorder(root->left, k);
    cnt++;
    if (cnt == k)
    {
        ans = root->val;
        return;
    }
    findInorder(root->right, k);
}
int kthSmallest(TreeNode *root, int k)
{
    findInorder(root, k);
    return ans;
}
*/