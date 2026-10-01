/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxm = 0;
    void zigzag(TreeNode* root, bool right, int count) {
        if (!root) {
            maxm = max(maxm, count - 1);
            return;
        }

        if (!right)
            zigzag(root->right, true, count + 1);
        else 
            zigzag(root->left, false,count + 1);
    }
    void dfs(TreeNode* root) {
        if (!root)
            return;

        zigzag(root, false, 0);
        zigzag(root, true, 0);
        dfs(root->left);
        dfs(root->right);
    }

    int longestZigZag(TreeNode* root) {
        if (!root || (!root->left && !root->right))
            return 0;

        dfs(root);
        return maxm;
    }
};