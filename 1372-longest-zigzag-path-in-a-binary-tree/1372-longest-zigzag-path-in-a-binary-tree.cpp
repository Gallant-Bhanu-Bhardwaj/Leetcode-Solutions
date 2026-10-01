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
    int ans = 0;

    void dfs(TreeNode* root, int leftlen, int rightlen) {
        if (!root)
            return;
        ans = max(ans, max(leftlen, rightlen));
        if (root->right)
            dfs(root->right, rightlen + 1, 0);
        if (root->left)
            dfs(root->left, 0, leftlen + 1);
    }

    int longestZigZag(TreeNode* root) {
        if (!root)
            return 0;

        dfs(root, 0, 0);

        return ans;
    }
};