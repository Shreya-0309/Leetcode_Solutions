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
    int sum = 0;
    int rangeSumBST(TreeNode* root, int left, int right) {
        if(root) { 
            rangeSumBST(root->left, left, right);
            if(root->val >= left && root->val <= right) {
                sum += root->val;
            }
            rangeSumBST(root->right, left, right);
        }
        return sum;
    }
};
