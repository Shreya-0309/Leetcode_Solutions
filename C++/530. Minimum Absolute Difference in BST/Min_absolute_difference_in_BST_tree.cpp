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
    int diff = INT_MAX;
    void inorder(TreeNode* node, int& prev) {
        if(!node) return;
        inorder(node->left, prev);
        if (prev != INT_MAX) {
            diff = min(diff, abs(node->val - prev));
        }
        prev = node->val;
        inorder(node->right, prev);
    }
    int getMinimumDifference(TreeNode* root) {
        if(!root) return 0;
        int prev = INT_MAX;
        inorder(root, prev);
        return diff;
    }
};
