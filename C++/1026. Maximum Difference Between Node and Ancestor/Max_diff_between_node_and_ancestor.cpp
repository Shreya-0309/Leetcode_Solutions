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
    int diff = 0;
    void dfs(TreeNode* node, int minVal, int maxVal) {
        if(!node) return;
        minVal = min(minVal, node->val);
        maxVal = max(maxVal, node->val);
        dfs(node->left, minVal, maxVal);
        diff = max(diff, max(abs(minVal - node->val), abs(maxVal - node->val)));
        dfs(node->right, minVal, maxVal);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root) return 0;
        int minVal = root->val;
        int maxVal = root->val;
        dfs(root, minVal, maxVal);
        return diff;
    }
};
