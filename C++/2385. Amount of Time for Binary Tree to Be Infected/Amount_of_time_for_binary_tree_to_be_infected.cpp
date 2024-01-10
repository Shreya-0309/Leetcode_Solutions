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
    unordered_map<int, vector<int>> graph;
    int amountOfTime(TreeNode* root, int start) {
        create_unidirected_graph(root);
        queue<int> q;
        q.push(start);
        unordered_set<int> visited;
        int time_taken = -1;
        while (!q.empty()) {
            time_taken++;
            for (int i = q.size(); i > 0; i--) {
                int curr = q.front();
                q.pop();
                visited.insert(curr);
                for (int adj_node : graph[curr]) {
                    if (!visited.count(adj_node)) {
                        q.push(adj_node);
                    }
                }
            }
        }
        return time_taken;
    }
    void create_unidirected_graph(TreeNode* root) {
        if (!root) return;
        if (root->left) {
            graph[root->val].push_back(root->left->val);
            graph[root->left->val].push_back(root->val);
        }
        if (root->right) {
            graph[root->val].push_back(root->right->val);
            graph[root->right->val].push_back(root->val);
        }
        create_unidirected_graph(root->left);
        create_unidirected_graph(root->right);
    }
};
