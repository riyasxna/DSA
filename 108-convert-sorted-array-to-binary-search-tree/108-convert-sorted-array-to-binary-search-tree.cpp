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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        TreeNode* root=ans(nums, 0, n-1);
        return root;
        }
    TreeNode* ans(vector<int>&nums, int start, int end){
        if(start>end)
            return NULL;
        int mid=(start+end)/2;
        TreeNode* rt = new TreeNode(nums[mid]);
        rt->left=ans(nums, start, mid-1);
        rt->right=ans(nums, mid+1, end);
        return rt;
    }
};