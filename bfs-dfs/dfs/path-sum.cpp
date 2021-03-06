#include "dfs.h"

#include "nodes.h"

/*
 * Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

Note: A leaf is a node with no children.
 */

bool hasPathSum(TreeNode* root, int sum) {
    if(!root) {
        return false;
    }

//    if(root->val == sum && !root->left && !root->right) {
//        return true;
//    }
    /// More concise and explicit than the commented out code above.
    if(!root->left && !root->right) {
        return sum == root->val;
    }

    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}