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
    int recurse(TreeNode* node, int sum) {
        if (!node) return 0;
        int newSum = 2 * sum + node->val;
        if (!node->left && !node->right) return newSum;
        return recurse(node->left, newSum) + recurse(node->right, newSum);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        return recurse(root, 0);
    }
};