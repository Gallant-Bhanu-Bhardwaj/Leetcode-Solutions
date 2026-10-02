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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)
            return NULL;

        if (root->val == key) {
            // case 0 : 0 children
            if (!root->left && !root->right) {
                delete root;
                return NULL;
            }

            // case 1 : 1 children
            if (!root->left) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            if (!root->right) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            } 

            // case 2: 2 children
            if(root->left && root->right)
            { 
                TreeNode* minnode = root->right;
                while(minnode->left) minnode = minnode->left;
                root->val = minnode->val;
                root->right = deleteNode(root->right,minnode->val);
                return root;
            }

        } else if (root->val >  key) {
            root->left = deleteNode(root->left, key);
            return root;
        }

        root->right = deleteNode(root->right, key);
        return root;
    }
};