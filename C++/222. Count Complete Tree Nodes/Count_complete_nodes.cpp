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
    int count(TreeNode* node, int sum) {
        if(node) sum++;
        if(node->left) count(node->left, sum);
        if(node->right) count(node->right, sum);
        return sum;
    }
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        return count(root, 0);
    }
};
