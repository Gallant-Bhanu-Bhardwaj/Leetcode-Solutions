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
    int maxLevelSum(TreeNode* root) {
        if (!root)
            return NULL;
        queue<TreeNode*> q;
        q.push(root);

        int ans = 1, level = 1, maxi = INT_MIN;

        while (!q.empty()) {
            int sum = 0;
            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode* front = q.front();
                q.pop();

                sum += front->val;

                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
            }

            if (maxi < sum) {
                maxi = sum;
                ans = level;
            }
            level++;
        }
        return ans;
    }
};