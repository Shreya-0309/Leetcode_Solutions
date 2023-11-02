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
    pair<int,int> postorder(TreeNode* node, int& ans){
        if(!node) return {0,0};
        auto l = postorder(node->left, ans);
        auto r = postorder(node->right, ans);
        int totalSum = l.first + r.first + node->val;
        int totalCount = l.second + r.second + 1;
        ans += (node->val == totalSum / totalCount);
        if(node->val == totalSum / totalCount) return {totalSum, totalCount};
        return {totalSum, totalCount};
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        postorder(root, ans);
        return ans;
    }
};
